//create program creates nodes but does NOT link them together, so it is not actually creating a linked list — just separate nodes.

#include<stdio.h>
#include<stdlib.h>
void create(int d);
struct Node{
    int data;
    struct Node *nxt;
};
int main(){
    create(10);
    create(20);
    create(30);
}
void create(int d)
{
    struct Node *pnew;
    pnew=malloc(sizeof(struct Node));
    pnew->data=d;
    pnew->nxt=NULL;
    printf("%d ",pnew->data);
}