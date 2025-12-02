//remove node from the end of the list

#include<stdio.h>
#include<stdlib.h>
void addNodeToTail(int d);
void removeNodeFromTail();
void printList();
struct Node {
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
    removeNodeFromTail();
    printList();
    return 0;
}
void addNodeToTail(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    //printf("%d ", pnew->data);
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

void removeNodeFromTail(){
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    if(phead->nxt==NULL)
    {
        free(phead);
        phead=NULL;
        return ;
    }
    struct Node *ptrav=phead;
    struct Node *prev=NULL;

    while(ptrav->nxt!=NULL)
    {
        prev=ptrav;
        ptrav=ptrav->nxt;
    }
    prev->nxt=NULL;
    free(ptrav);
}
void printList(){
    struct Node *ptrav=phead;
    if(phead==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    //ptrav=phead;
    while(ptrav!=NULL)
    {
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}