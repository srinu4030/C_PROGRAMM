//Reverse a linked lsit

#include<stdio.h>
#include<stdlib.h>
void addNode(int d);
void printList();
void reverseList();
struct Node{
    int data;
    struct Node *nxt;
};
struct Node *phead=NULL;
int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    printf("The list is : ");
    printList();
    printf("After reversing the list : ");
    reverseList();
    printList();
    return 0;

}
//adding node to the list
void addNode(int d){
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL){
        phead=pnew;
        return ;
    }
    struct Node *ptemp=phead;
    while(ptemp->nxt !=NULL){
        ptemp=ptemp->nxt;
    }
    ptemp->nxt=pnew;
}
//printing the list
void printList() {
    if(phead==NULL){
        printf("List is empty.\n");
        return ;
    }
    struct Node *ptrav=phead;
    while(ptrav != NULL){
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}
//reversing the linked list
void reverseList(){
    struct Node *currNode, *nextNode, *prevNode;
    prevNode=NULL;
    currNode=phead;
    nextNode=phead;
    while(nextNode !=NULL){
        nextNode=nextNode->nxt;
        currNode->nxt=prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    phead=prevNode;
}