#include<stdio.h>
int main(){
    int i;
    /*for(i=2; i<=20 ; i++)
          if(i%2==0)
             printf("%d\n", i); */
    for (i=2; i<=20; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}


/*#include<stdio.h>
int main(){
    int i=2;
    while(i<=20)
    {
        printf("%d\n", i);
        i+=2;
    }
} */