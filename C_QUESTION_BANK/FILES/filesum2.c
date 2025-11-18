// Create a program that reads integers from a file and calculates their sum, then writes the 
//sum to another file.

#include<stdio.h>
int main(){
    FILE *input, *output;
    int num, sum=0;

    input=fopen("numbers.txt", "r");
    if(input==NULL)
    {
        printf("Cannot open input file.\n");
        return 1;
    }
    output=fopen("sum.txt", "w");
    if(output==NULL)
    {
        printf("Cannot open output file.\n");
        fclose(input);
        return 1;
    }
    while(fscanf(input, "%d", &num)==1)
        sum+=num;
    
    fprintf(output, "Sum=%d", sum);
    printf("Sum is calculated and written to file successfully.\n");
    return 0;    
}
