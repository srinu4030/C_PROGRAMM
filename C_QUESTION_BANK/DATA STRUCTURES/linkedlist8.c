/* Write recursive functions for the following operations on a linked list.
 (i) Find length of the list
 (ii) Find sum of all elements in the list
 (iii) Display the linked list
 (iv) Display the list in reverse order
 (v) Reverse the linked list.
 (vi) Insert a node at the end of the list
 (vii) Delete the last node from the list
 (viii) Search for an element in the list*/

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*nxt;
};
void addNode(int d);
void display(struct Node*ptrav);
void displayReverse(struct Node*ptrav);
int length(struct Node *ptemp);
int sumList(struct Node *ptrav);
struct Node* reverseList(struct Node *ptrav);
int search(struct Node *ptrav, int key);
struct Node* insertEnd(struct Node *ptrav, int value);
struct Node* deleteLast(struct Node *ptrav);

struct Node *phead;
int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printf("Displaying the Linked list : ");
    display(phead);
    printf("\nDisplaying the list in reverse order : ");
    displayReverse(phead);
    printf("\nThe length of the list is : %d", length(phead));
    printf("\nThe sum of all elements in the list : %d", sumList(phead));
    printf("\nReverse the linked list : ");
    phead=reverseList(phead);
    display(phead);
    int key = 30;
    if (search(phead, key))
        printf("\n%d found in list", key);
    else
        printf("\n%d NOT found in list", key);
    phead = insertEnd(phead, 50);
    printf("\nAfter inserting 50 at end: ");
    display(phead); 
    phead = deleteLast(phead);
    printf("\nAfter deleting last node: ");
    display(phead);  
    return 0; 
}
void addNode(int d)
{
    struct Node*pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;
        return;
    }
    struct Node *ptemp=phead;
    while(ptemp->nxt != NULL)
    {
        ptemp=ptemp->nxt;
    }
    ptemp->nxt=pnew;
}

//Display the linked list
void display(struct Node *ptrav)
{
    if(ptrav== NULL)
        return ;
    printf("%d ", ptrav->data);
    display(ptrav->nxt);  
}

//Display the list in reverse order 
void displayReverse(struct Node *ptrav)
{
    if(ptrav == NULL)
        return ;
    displayReverse(ptrav->nxt);
    printf("%d ", ptrav->data);    
}

//Find length of the list
int length(struct Node *ptemp)
{
    if(ptemp==NULL)
        return 0;
    return 1+length(ptemp->nxt);          
}
//Find sum of all elements in the list
int sumList(struct Node *ptrav)
{
    if(ptrav==NULL)
        return 0;
    return ptrav->data+sumList(ptrav->nxt);    
}
//Reverse the linked list
struct Node* reverseList(struct Node *ptrav) {
    if (ptrav == NULL || ptrav->nxt == NULL)
        return ptrav;

    struct Node *newHead = reverseList(ptrav->nxt);
    ptrav->nxt->nxt = ptrav;
    ptrav->nxt = NULL;
    return newHead;
}

//Search for an element in the list
int search(struct Node *ptrav, int key) {
    if (ptrav == NULL)
        return 0;
    if (ptrav->data == key)
        return 1;
    return search(ptrav->nxt, key);
}

//Insert a node at the end of the list
struct Node* insertEnd(struct Node *ptrav, int value) {
    if (ptrav == NULL) {   
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }
    ptrav->nxt = insertEnd(ptrav->nxt, value);
    return ptrav;
}
//Delete the last node from the list
struct Node* deleteLast(struct Node *ptrav) {
    if (ptrav == NULL)
        return NULL;

    if (ptrav->nxt == NULL) {
        free(ptrav);
        return NULL;
    }

    ptrav->nxt = deleteLast(ptrav->nxt);
    return ptrav;
}
