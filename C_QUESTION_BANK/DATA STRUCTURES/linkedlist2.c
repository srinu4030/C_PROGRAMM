// Write a function to find the smallest and largest element of a single linked list.

#include<stdio.h>
#include<stdlib.h>
void addNodeToTail(int d);
void printList();
void findSmallestAndLargest(int *small, int *large);
struct Node{
    int data;
    struct Node *nxt;
};
struct Node *phead=NULL;
int main(){
    addNodeToTail(10);
    addNodeToTail(20);
    addNodeToTail(30);
    addNodeToTail(40);
    addNodeToTail(50);
    printList();
    int small,large;
    findSmallestAndLargest(&small, &large);
    printf("\nSmallest element is : %d\n", small);
    printf("Largest element is : %d\n", large);
    return 0;
}
void addNodeToTail(int d){
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;
        return ;
    }
    struct Node *ptrav=phead;
    while(ptrav->nxt!=NULL)
    {
        ptrav=ptrav->nxt;
    }
    ptrav->nxt=pnew;   
}
void printList(){
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *ptrav=phead;
    while(ptrav!=NULL)
    {
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
}
void findSmallestAndLargest(int *small, int*large)
{
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    struct Node*ptemp=phead;
    *small=ptemp->data;
    *large=ptemp->data;
    while(ptemp!=NULL)
    {
        if(ptemp->data<*small)
            *small=ptemp->data;
        if(ptemp->data>*large)
            *large=ptemp->data;
        ptemp=ptemp->nxt;        
    }
}
