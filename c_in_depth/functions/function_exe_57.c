//compare two dates
#include<stdio.h>
int cmpdate(int d1, int m1, int y1, int d2, int m2, int y2);
int main(){
    int d1,m1,y1,d2,m2,y2;
    printf("Enter the first date (dd mm yyyy) : ");
    scanf("%d %d %d", &d1,&m1, &y1);
    printf("Enter the second date (dd mm yyyy) : ");
    scanf("%d %d %d", &d2, &m2, &y2);

    int result=cmpdate(d1,m1,y1,d2,m2,y2);
    if(result==1)
    {
        printf("Date1 is before Date2.\n");       
    }
    else if(result==-1)
        printf("Date2 is before Date1.\n");
    else
        printf("Both the dates are same.\n");
    return 0;        
}
int cmpdate(int d1, int m1, int y1,int d2, int m2, int y2)
{
    if(y1<y2)
        return 1;
    else if(y1>y2)
        return -1;
    else
    {
        if(m1<m2)
            return 1;
        else if(m1>m2)
            return -1;
        else
        {
            if(d1<d2)
                return 1;
            else if(d1>d2)
                return -1;
            else
                return 0;        
        }        
    }        
}