/*. Define a union to store either an integer or a floatingpoint number. Write a function to accept the 
type of data (integer or float) and then read the corresponding value from the user. Store the value in 
the union and print it. */

#include<stdio.h>
union data{
    int i;
    float f;
};
void readAndDisplayUnion(){
    union data d;
    int choice;
    printf("Enter your choice : \n");
    printf("1.integer\n2.float\n ");
    scanf("%d", &choice);
    
    if(choice==1)
    {
        printf("Enter an integer number : ");
        scanf("%d", &d.i);
        printf("You entered integer : %d\n", d.i);
    }
    else if(choice==2)
    {
        printf("Enter an float number : ");
        scanf("%f", &d.f);
        printf("You entered float : %.2f\n", d.f);
    }
}
int main(){
    readAndDisplayUnion();
    return 0;
}
