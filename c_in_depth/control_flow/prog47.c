#include<stdio.h>
int main(){
    int i, num, largest;
        scanf("%d", &largest);
   
        for(int i=2; i<=10; i++)
    {
        scanf("%d\n", &num);

        if (num>largest)
            largest=num;
    }
    printf("The largest number is : %d", largest);

}