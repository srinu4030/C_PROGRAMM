//Write a function to count the number of occurrences of an element in a single linked list.

#include<stdio.h>
#include<stdlib.h>
void addNodeToTail(int d);
void printList();
int countOccurencesEle(int key);
struct Node{
    int data;
    struct Node *nxt;
};
struct Node *phead=NULL;
int main(){
    addNodeToTail(10);
    addNodeToTail(10);
    addNodeToTail(20);
    addNodeToTail(30);
    addNodeToTail(40);
    addNodeToTail(50);
    addNodeToTail(10);
    printList();
    int key;
    printf("Enter the key element : ");
    scanf("%d", &key);
    int result=printf("Count is : %d",countOccurencesEle(key));
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
    struct Node*ptrav=phead;
    while(ptrav->nxt!=NULL)
    {
        ptrav=ptrav->nxt;
    }
    ptrav->nxt=pnew;
}
void printList()
{
    struct Node *ptrav=phead;
    if(ptrav==NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    while(ptrav !=NULL)
    {
        printf("%d ", ptrav->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}
int countOccurencesEle(int key)
{
    int count=0;
    struct Node *ptemp=phead;
    while(ptemp != NULL)
    {
        if(ptemp->data==key)
            count++;
        ptemp=ptemp->nxt;    
    }
    return count;
}