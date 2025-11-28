/* Implement a linked list using structures. Each node in the list should hold an integer value and a 
pointer to the next node.*/

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*nxt;
};
void addNodeToTail(int d);
void display();
struct Node *phead;
int main(){
    addNodeToTail(10);
    addNodeToTail(20);
    addNodeToTail(30);
    addNodeToTail(40);
    addNodeToTail(50);
    display();
    return 0;
}

void addNodeToTail(int d)
{
    struct Node *pNew, *ptrav;
    pNew=malloc(sizeof(struct Node));
    pNew->data=d;
    pNew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pNew;
        return ;
    }
    ptrav = phead;
    while(ptrav->nxt!=NULL)
    {
        ptrav=ptrav->nxt;
    }
    ptrav->nxt=pNew;
}

void display(){
    struct Node *ptrav=phead;
    while(ptrav !=NULL)
    {
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
}