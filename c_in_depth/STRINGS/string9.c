#include<stdio.h>
#include<string.h>
int main(){
    char str1[30]="Subash ";
    char str2[10]="Chandra ";
    //char str3[30]; ---> it contains garbage value;
    char str3[30]=" ";
    strcat(strcat(str1,str2),"Bose");
    printf("str1-%s\n", str1);
    strcat(strcat(str3, "Dev"), "anshi");
    printf("str3-%s\n", str3);
    return 0;

}