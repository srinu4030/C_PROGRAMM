/*Write a program to remove the last node of the list and insert it in the beginning, without 
changing info part of any node.*/

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
void removeLastAndAddFirst();
struct Node{
    int data;
    struct Node *nxt;
};
struct Node *phead;
int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printf("Original List : ");
    printList();
    printf("After remove last and add to first : ");
    removeLastAndAddFirst();
    printList();
    return 0;
}
void addNode(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;;
        return ;
    }
    struct Node *ptemp=phead;
    while(ptemp->nxt !=NULL)
    {
        ptemp=ptemp->nxt;
    }
    ptemp->nxt=pnew;
}
void printList()
{
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    struct Node *ptrav=phead;
    while(ptrav != NULL)
    {
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}
void removeLastAndAddFirst(){
    if(phead==NULL || phead->nxt==NULL)
        return ;
    struct Node *ptrav=phead;
    struct Node *prev= NULL;
    while(ptrav->nxt !=NULL)
    {
        prev=ptrav;
        ptrav=ptrav->nxt;
    }    
    prev->nxt=NULL;
    ptrav->nxt=phead;
    phead=ptrav;
}