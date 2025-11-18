// Print Ascii Values using Array in C

/*
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("ASCII values of the characters:\n");
    for(int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c -> ASCII: %d\n", str[i], str[i]);
    }

    return 0;
}
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    char arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n; i++)
    {
        scanf(" %C", &arr[i]);
    }
    printf("ASCII values of a character  :\n");
    for(int i=0; i<n; i++)
    {
        printf("Character: %c -> ASCII: %d\n", arr[i], arr[i]);
    }
    return 0;
}