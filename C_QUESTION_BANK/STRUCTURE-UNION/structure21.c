/*Create a structure to represent a book with the following members: title (string), author (string), 
ISBN (long int), and number of pages (int). Write a function to accept details of a book from the user and
 store them in a structure variable. */

#include<stdio.h>
struct book{
    char title[20];
    char author[20];
    long int ISBN;
    int nop;
};
void display(struct book b);
int main(){
    struct book b;
    //struct book b={"C Programming", "Dennis", 123456778, 360};
    printf("Enter the book name: ");
    scanf("%s", b.title);
    printf("Enter the author name : ");
    scanf("%s", b.author);
    printf("Enter the ISBN number : ");
    scanf("%ld",&b.ISBN);
    printf("Enter the number of pages : ");
    scanf("%d", &b.nop);
    display(b);
    return 0;
}
void display(struct book b)
{
    printf("----THE DETAILS OF BOOK-----\n");
    printf("The book name is : %s\n", b.title);
    printf("The author name is : %s\n", b.author);
    printf("The ISBN number is : %ld\n", b.ISBN);
    printf("The number of pages is : %d\n", b.nop);
}