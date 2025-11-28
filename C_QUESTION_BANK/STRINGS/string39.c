/*Write a C program to find the longest palindromic substring from a given string. Return the 
substring*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int n, i, j, left, right, isPal, bestLen = 0;
    printf("Enter string: ");
    scanf("%s", str);
    n = strlen(str);
    for (i = 0; i < n; i++) {          // Start of substring
        for (j = i; j < n; j++) {      // End of substring
            // Check if str[i...j] is palindrome
            left = i;
            right = j;
            isPal = 1;                 // Assume palindrome
            while (left < right) {
                if (str[left] != str[right]) {
                    isPal = 0;         // Not palindrome
                    break;
                }
                left++;
                right--;
            }

            // If palindrome and length > bestLen
            if (isPal && (j - i + 1) > bestLen) {
                bestLen = j - i + 1;
                // Copy the palindrome manually (character by character)
                int k, index = 0;
                for (k = i; k <= j; k++) {
                    longest[index] = str[k];
                    index++;
                }
                longest[index] = '\0';   // End the string
            }
        }
    }
    printf("Longest Palindromic Substring = %s\n", longest);
    return 0;
}



/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i, j;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);
    if (str[n-1] == '\n') str[n-1] = '\0';
    n = strlen(str);

    // Print original
    for(i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    // Print reverse
    for(j = n-1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    printf("\n");

    // Check palindrome (simple)
    i = 0;
    j = n - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            printf("Not Palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
*/