//Write a function to create a copy of a single linked list.

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
struct Node*copyList();
struct Node{
    int data;
    struct Node*nxt;
};
struct Node *phead=NULL;    // phead always stores the address of the first node in the linked list.
struct Node *ptail=NULL;    //ptail always stores the address of the last node in the linked list.
int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printf("Ooriginal List : ");
    printList();
    struct Node *copy=copyList();
    printf("Copied List : ");
    printList();
    return 0;
}
void addNode(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)     //if phead is null
    {
        phead=pnew;     //0xa000
        ptail=pnew;     //0xa000
    }
    else
    {
        ptail->nxt=pnew;  //0xa020
        ptail=pnew;       //0xa020
    }
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

struct Node*copyList(){
    if(phead==NULL)
        return NULL;

    struct Node *src=phead;       // pointer to original list
    struct Node *newHead=NULL;    // new copy head
    struct Node *newTail=NULL;    //new copy tail
    while(src !=NULL)
    {
        struct Node*pnew;
        pnew=malloc(sizeof(struct Node));
        pnew->data=src->data;
        pnew->nxt=NULL;

        if(newHead==NULL)
        {
            newHead=pnew;
            newTail=pnew;
        }
        else
        {
            newTail->nxt=pnew;
            newTail=pnew;
        }
        src=src->nxt;  // move in original list
    }
    return newHead;    // return copied list
}

    
