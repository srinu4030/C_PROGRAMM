//using switch case

/*#include<stdio.h>
int main(){
    int a,b, maxi;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);


    maxi=(a>b)?1:0;
    switch(maxi)
    {
        case 1:
            printf("Maximum is: %d\n", a);
            break;
        case 0:
            printf("Maximum is : %d\n", b);
            break;
        default:
            printf("Invalid\n");        
    }
    return 0;
}*/


#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);


    switch ((int)(a>b)){
        case 1:
            printf("Maximum is : %d\n", a);
            break;
        case 0:
            printf("Maximum is :%d\n", b);
            break;
        default:
            printf("Invalid\n");        
    }
    return 0;
}


