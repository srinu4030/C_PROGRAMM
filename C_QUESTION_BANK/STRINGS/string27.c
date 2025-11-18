// Write a program in C to print only the string before the new line character.

/*#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]; i++)
    {
        if(str[i]=='\n')
            break;
        printf("%c", str[i]);    
    }
    
    return 0;
}
*/


#include <stdio.h>

int main() {
    char str[100];

    printf("Enter multiple lines (press Enter on empty line to stop):\n");

    while (1) {
        fgets(str, sizeof(str), stdin);

        if (str[0] == '\n')  // empty line
            break;

        printf("You typed: %s", str);
    }

    return 0;
}
