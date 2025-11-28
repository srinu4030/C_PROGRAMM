/*Write a program that accepts the radius of a circle and calculates the area and perimeter of
that circle. */

#include<stdio.h>
int main(){
    float radius, perimeter,area;
    printf("Enter the radius : ");
    scanf("%f", &radius);

    radius=3.14*radius*radius;  //
    perimeter=2*3.14*radius;

    printf("Radius of a circle is : %.2f\n", radius);
    printf("Perimeter of a circle is :%.2f\n", perimeter);
    return 0;
}


