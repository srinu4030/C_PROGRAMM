/* Define a structure to represent a point in 2D space with x and y coordinates (both integers). Write a 
function to check if two points are equal (have the same x and y coordinates).*/

#include<stdio.h>
struct point{
    int x;
    int y;
};
int twoPointsAreEqual(struct point pq, struct point p2);
int main(){
    struct point p1,p2;
    printf("Enter the coordinates of point1(x,y) : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the coordinates of point2(x,y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    if(twoPointsAreEqual(p1,p2))
        printf("Yes both coordinates are equal.\n");
    else
        printf("Both coordinates are not equal.\n");
    return 0;    
}
int twoPointsAreEqual(struct point p1, struct point p2)
{
    return (p1.x==p2.x && p1.y==p2.y);
}