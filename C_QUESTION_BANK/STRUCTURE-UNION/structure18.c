/* Create a structure to represent a student with the following members: name (string), roll number 
(int), and marks (float). Write a function to display the details of a student. */

/*passing entire structure variable to a function
#include<stdio.h>
struct student{
    char name[100];
    int roll_num;
    float marks;
};
void display (struct student s);
int main(){
    struct student s;
    char name[100];
    int roll_num;
    float marks;
    printf("Enter the student name: ");
    scanf("%s", s.name);
    printf("Enter the student roll_no: ");
    scanf("%d", &s.roll_num);
    printf("Enter the total marks of std : ");
    scanf("%f", &s.marks);
    display(s);
    return 0;
}
void display (struct student s)
{
    printf("Name of student : %s\n", s.name);
    printf("Roll number of std : %d\n", s.roll_num);
    printf("Marks of a student : %.2f\n", s.marks);
}*/

/*passing individual structure members*/
#include<stdio.h>
void display(char name[], int roll_no, float marks);
struct student{
    char name[10];
    int roll_no;
    float marks;
};

int main(){
    struct student s={"srinu", 56, 897.00};
    display(s.name, s.roll_no, s.marks);
}
void display(char name[], int roll_no, float marks)
{
    printf("Name of student : %s\n", name);
    printf("Roll_no of student : %d\n", roll_no);
    printf("Marks of student : %.2f\n", marks);
}