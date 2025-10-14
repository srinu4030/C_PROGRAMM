#include<stdio.h>
int main(){
    int m1,m2,m3,m4,total;
    char grade;
    float per;
    printf("Enter the marks:");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    total=m1+m2+m3+m4;
    per=total/4.0;

    if(per>=85)
        grade='A';
    else if (per>=70)
        grade='B';
    else if (per>=55)
        grade='C';
    else if (per>=40) 
        grade='D';
    else
        grade='E';

    
        
    printf("Percentage is %.2f, and Grade is %c\n", per, grade);
    return 0;   

}