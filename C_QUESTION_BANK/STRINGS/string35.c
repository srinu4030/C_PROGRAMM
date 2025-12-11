//Write a C program to find the length of the longest substring of a given string without 
//repeating characters.

#include <stdio.h>
#include <string.h>

int longestSubstring(char *s) {
    int freq[256] = {0};      // Track character count
    int left = 0, right = 0;  // Two pointers
    int maxLen = 0;

    while (s[right] != '\0') {
        freq[(unsigned char)s[right]]++;  // Add new char

        // If char repeats → shrink from left
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        // Window is valid now (unique chars only)
        int currentLen = right - left + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;

        right++;
    }
    return maxLen;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%99s", str);

    printf("Longest substring length = %d\n",
           longestSubstring(str));

    return 0;
}
