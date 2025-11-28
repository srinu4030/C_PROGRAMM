//Array of pointers to strings

#include<stdio.h>
int main(){
    char *arrp[]={"white","red","green", "yellow","pink"};
    for(int i=0; i<5; i++)
    {
        printf("String is : %s",arrp[i]);
        printf("\nAddress of actual string (RO DATA) : %p\n", arrp[i]);
        printf("Address where the pointer is stored (STACK) : %p\n", (arrp + i));

    }
    return 0;
}