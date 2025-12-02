/*Write a program to remove first node of the list and insert it at the end, without changing 
info part of any node.*/

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
void moveFirstToEnd();
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
    printf("original List : ");
    printList();
    moveFirstToEnd();
    printf("After remove first and add to end : ");
    printList();
    return 0;

}
void addNode(int d){
    struct Node*pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;
        return ;
    }
    struct Node *ptemp=phead;
    while(ptemp->nxt != NULL)
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
void moveFirstToEnd(){
    if(phead==NULL || phead->nxt == NULL)
    {
        return ;
    }
    struct Node *pfirst;
    pfirst=phead;   //copy first node address to pfirst  0xa000
    phead=phead->nxt;  //copy first node address part to phead  0xa020

    struct Node *ptemp=phead; //copy phead address to ptemp 0xa020
    while(ptemp->nxt!=NULL)
    {
        ptemp=ptemp->nxt;
    }
    ptemp->nxt=pfirst;   //attach first node to the end 
    pfirst->nxt=NULL;    //last node point to NULL
}
