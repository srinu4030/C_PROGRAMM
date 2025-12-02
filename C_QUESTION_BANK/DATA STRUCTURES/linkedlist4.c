// Write a function to move the largest element to the end of a single linked list.
/*1. Find the biggest number.
2. Cut it out from the list.
3. Paste it at the end of the list.
*/

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
void moveLargestToEnd();
struct Node{
    int data;
    struct Node *nxt;
};
struct Node *phead=NULL;
int main(){
    addNode(50);
    addNode(20);
    addNode(30);
    addNode(40);
    printf("Originala List : ");
    printList();
    moveLargestToEnd();
    printf("After moving to End : ");
    printList();
}
void addNode(int d){
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
        return ;
    }
    struct Node *ptemp=phead;
    while(ptemp != NULL)
    {
        printf("%d ", ptemp->data);
        ptemp=ptemp->nxt;
    }
    printf("\n");
}
void moveLargestToEnd(){
    if(phead==NULL || phead->nxt == NULL)
        return ;
    struct Node *ptrav=phead;   //current node
    struct Node *largest=phead; //largest node found
    struct Node *prev=NULL;     //previous node
    struct Node *prevLargest=NULL;  //previous of largest
    while(ptrav !=NULL)
    {
        if(ptrav -> data > largest-> data)
        {
            largest=ptrav;
            prevLargest=prev;
        }
        prev=ptrav;
        ptrav=ptrav->nxt;
    } 
    // If largest is already the last node, nothing to do
    if(largest->nxt==NULL)
        return ;
    // Remove largest from its current position    
    if(largest==phead){
        phead=phead->nxt;
    }else{      
        prevLargest->nxt=largest->nxt;
    }
     // Move largest to the end
    struct Node *tail=phead;
    while(tail->nxt != NULL)
    {
        tail=tail->nxt;
    }
    tail->nxt=largest;
    largest->nxt=NULL;
}