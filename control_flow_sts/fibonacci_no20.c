//using for loop

#include<stdio.h>
int main(){
    long x,y,z;
    int i, n;
    x=0;
    y=1;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("%d\n", x);
    printf("%d\n", y);

    for(int i=1; i<n; i++)
    {
        z=x+y;
        printf("%d\n", z);
        x=y;
        y=z;
    }
    printf("\n");
    return 0;


}