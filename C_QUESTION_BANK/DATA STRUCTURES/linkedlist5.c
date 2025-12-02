//Write a function to move the smallest element to the beginning of a single linked list. 

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
void moveSmallestToBegining();
struct Node{
    int data;
    struct Node *nxt;
};
struct Node*phead=NULL;
int main(){
    addNode(50);
    addNode(30);
    addNode(40);
    addNode(10);
    addNode(20);
    printf("Original list : ");
    printList();
    moveSmallestToBegining();
    printf("After move to begining : ");
    printList();
}
void addNode(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;
        return;
    }
    struct Node *ptrav =phead;
    while(ptrav ->nxt!=NULL)
    {
        ptrav =ptrav->nxt;
    }
    ptrav->nxt=pnew;
}
void printList(){
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    struct Node *ptrav=phead;
    while(ptrav != NULL)
    {
        printf("%d ", ptrav ->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}
void moveSmallestToBegining()
{
    if(phead==NULL || phead->nxt==NULL)
        return ;
    struct Node *ptrav=phead;
    struct Node *smallest=phead;
    struct Node *prev=NULL;
    struct Node *prevSmallest=NULL;
    while(ptrav !=NULL)
    {
        if(ptrav ->data < smallest->data)
        {
            smallest=ptrav;
            prevSmallest=prev;
        }
        prev=ptrav;
        ptrav=ptrav->nxt;
    }    
    if(smallest->nxt==NULL)
        return;
    if(smallest==phead)
        return ;
    prevSmallest->nxt = smallest->nxt;

    // Step 4: Insert smallest at the beginning
    smallest->nxt = phead;
    phead = smallest;
}
    
    
    