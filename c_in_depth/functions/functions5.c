#include<stdio.h>
void selection(int age, float height);
int main(){
    int age;
    float height;
    printf("Enter the age and height:");
    scanf("%d\n%f", &age, &height);
    selection(age, height);
    selection(age, height);
    return 0;
}
void selection(int age, float height)
{
    
    if(age>25)
    {
        printf("Age should be less than 25\n");
        return ;
    }
    if(height<5)
    {
        printf("Height should be more than 5\n");
        return ;
    }
    printf("Selected\n");
}