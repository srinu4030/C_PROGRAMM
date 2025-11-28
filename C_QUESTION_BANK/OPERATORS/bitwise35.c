//Clear the last right side set a bit of a number

/*#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num&(num-1))
        printf("right side bit cleared.\n");
    else
        printf("Not cleared, already set to zero\n");
    return 0;        
}*/


#include<stdio.h>
#define CLEAR_RIGHT_BIT(num) (num &=(num-1))

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Before clearing a bit number is %d\n", num);
    CLEAR_RIGHT_BIT(num);
    printf("After clearing bit number is  %d\n", num);

    return 0;


}