/*31.Create a Single Linked List program and perform below operations with a detailed flowchart Cre
ate nodes. Input node data from the user.
-> Print a given node. Determine if the list has a loop.
->Find the total number of nodes. 
->Print the full list using the 'print_node' function.
->Swap nodes Sort nodes by data in ascending*/ 

#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node*nxt;
};
void createNode(int d);
void printNode(struct Node *ptemp);
void printList();
int countNodes();
int detectLoop();
void swapNodes(int x, int y);
void sortList();
struct Node*phead=NULL;
int main(){
    int choice, d, n,x,y;
    while(1){
        printf("1.Create Node\n");
        printf("2.Print full list\n");
        printf("3.Print specific Node\n");
        printf("4.Count Number of nodes\n");
        printf("5.Check loop\n");
        printf("6.Swap Two Nodes\n");
        printf("7.Sort the list\n");
        printf("8.Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Enter node data : ");
                scanf("%d", &d);
                createNode(d);
                break;
            case 2:
                printf("List is : ");
                printList();
                break;
            case 3:
                printf("Enter the position to print : ");
                scanf("%d", &n);
                struct Node *ptemp=phead;
                for(int i=1; i<n && ptemp != NULL; i++)
                    ptemp=ptemp->nxt;
                printNode(ptemp);
                break;
            case 4:
                printf("Total Nodes = %d\n", countNodes());
                break;
            case 5:
                if(detectLoop())
                    printf("Loop detected!\n");
                else
                    printf("No loop in the list.\n");    
                break;
            case 6:
                printf("Enter two values to swap : ");
                scanf("%d %d", &x, &y);
                swapNodes(x, y);
                printf("After swapping nodes : ");
                printList();
                break;
            case 7:
                sortList();
                printf("List sorted.\n");
                printList();
                break;
            case 8:
                exit(0);
            default :
                printf("Invalid option.\n");
        }
    }
}
//create a new node
void createNode(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    if(phead==NULL)
    {
        phead=pnew;
    }
    else{
        struct Node*ptemp=phead;
        while(ptemp->nxt != NULL)
            ptemp=ptemp->nxt;
        ptemp->nxt=pnew;    
    }
}

//Print single node
void printNode(struct Node *ptemp)
{
    if(ptemp==NULL)
        printf("Invalid node position.\n");
    else
        printf("Node data = %d\n", ptemp->data);    
}
//print full list
void printList()
{
    if(phead==NULL)
    {
        printf("List is emoty.\n");
        return ;
    }
    struct Node *ptrav=phead;
    while(ptrav != NULL){
        printf("%d ", ptrav ->data);
        ptrav=ptrav->nxt;
    }
    printf("\n");
}
//Count nodes
int countNodes()
{
    struct Node *ptrav =phead;
    int count=0;
    while(ptrav != NULL)
    {
        count ++;
        ptrav=ptrav->nxt;
    }
    return count;
}
//detect loop using Floyds algorithm
int detectLoop(){
    struct Node *slow=phead, *fast=phead;
    while(slow && fast && fast->nxt)
    {
        slow=slow->nxt;
        fast=fast->nxt->nxt;
        if(slow==fast)
        {
            return 1;
        }
        return 0;
    }
}
//void swap nodes
void swapNodes(int x, int y)
{
    if(x==y)
        return ;
    struct Node *nodeX=NULL;
    struct Node *nodeY=NULL;
    struct Node *ptemp=phead;
    while(ptemp != NULL)
    {
        if(ptemp->data==x)
            nodeX=ptemp;
        else if(ptemp->data==y)
            nodeY=ptemp;
        ptemp=ptemp->nxt;        
    }    
    if(nodeX==NULL || nodeY== NULL)
    {
        printf("One or both  values not found!\n");
        return ;
    }
    int t=nodeX->data;
    nodeX->data=nodeY->data;
    nodeY->data=t;
}
//sort the list using bubble soort
void sortList()
{
    struct Node *i, *j;
    int temp;
    for(i=phead; i!=NULL; i=i->nxt)
    {
        for(j=i->nxt; j!=NULL; j=j->nxt)
        {
            if(i->data > j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}