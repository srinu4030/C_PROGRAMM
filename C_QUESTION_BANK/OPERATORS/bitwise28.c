/*Toggle a given range of bits ,For example, take the number 245. The equivalent binary format is 11110101 and the
range is 4 to 7. So, the output should be 000001010 which is 5 in decimal.*/

#include<stdio.h>
int main(){
    int num=245;
    int start=4, end=7;
    int mask=((1<<(end-start+1))-1)<<start;
    int result=num^mask;

    printf("The original number is : %d\n", num);
    printf("After toggling bits %d to %d = %d\n", start, end, result);
    return 0;
}