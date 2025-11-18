//Input and output of strings using scanf() and printf()

#include<stdio.h>
int main(){
    char str[10]="Anpara";
    printf("String is : %s\n", str);
    printf("Enter the new value for string : ");
    scanf("%s",str);
    printf("Updates string is : %s\n", str);
    return 0;
}