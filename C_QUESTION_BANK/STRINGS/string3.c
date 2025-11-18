// Write a program in C to separate individual characters from a string.

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d", &n);
    char str[n];
    printf("Enter the string : ");
    scanf("%s", str);
    printf("Entered string is : ");
    printf("%s", str);

    char arr[n];
    int i=0;
    while(str[i])
    {
        arr[i]=str[i];
        i++;
    }
    printf("\nThe individual characaters are : \n");
    for(int i=0; i<n; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}

/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    char str[n];
    printf("Enter the string: ");
    scanf("%s", str); // reads until space

    printf("Entered string is: %s\n", str);

    printf("Individual characters are:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
*/