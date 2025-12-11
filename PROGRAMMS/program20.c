//Count vowels using pointer arithmetic

#include<stdio.h>
#include<string.h>
int main(){
    char *str="srinu";
    int n=strlen(str);
    char *ptr=str;
    int count=0;
    for(int i=0; i<n; i++){
        if(*(ptr+i)=='a' ||*(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u'){
            count++;
        }
    }
    printf("The count of vowels : %d\n", count);
    return 0;
}