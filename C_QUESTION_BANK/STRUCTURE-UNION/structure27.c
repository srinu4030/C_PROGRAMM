/*. Write a program that reads a text file containing lines of student data (name, roll number, marks) 
and stores the information in an array of structures. */


#include <stdio.h>
#include <stdlib.h>

#define MAX 100   // maximum number of students

struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student students[MAX];
    FILE *fp;
    int count = 0;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    // Read file line by line
    while (fscanf(fp, "%s %d %f", 
                  students[count].name, 
                  &students[count].roll, 
                  &students[count].marks) == 3) 
    {
        count++;
        if (count >= MAX)
            break;
    }
    fclose(fp);
    // Print stored data
    printf("\nStudent Data:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               students[i].name,
               students[i].roll,
               students[i].marks);
    }
    return 0;
}
