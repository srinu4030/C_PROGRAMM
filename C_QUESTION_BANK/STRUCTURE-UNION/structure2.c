//create a linked list

#include<stdio.h>
#include<stdlib.h>
void addNodeToTail(int d);
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
