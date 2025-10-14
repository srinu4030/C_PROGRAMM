#include<stdio.h>
int main(){
    int n, nsave, d,rem, dec=0, j=1;
    printf("Enter the binary number :");
    scanf("%d", &n);

    nsave=n;

    while(n>0)
    {
        rem=n%10;
        d=rem*j;
        dec=dec+d;
        j*=2;
        n=n/10;
    }
    printf("Binary number %d, Decimal number %d\n", nsave, dec);
    return 0;
}