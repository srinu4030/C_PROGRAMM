#include<stdio.h>
void drawline(void);
int main(){
    drawline();
    return 0;
}
void drawline(void)
{
    int i;
    for(int i=0; i<10; i++)
    {
        printf("_");
    }
}