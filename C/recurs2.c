#include <stdio.h>
#define MAX_SIZE 100

/* Function declaration */
void printNum(int N)
{
    if(N==1)
    {
        printf("%d - ",N);
        return;
    }
    if(N>1)
    {
    printf("%d - ",N);
    printNum(N-1);
    return;
    }
}


int main()
{
    int input=50;
    

    printNum(input);
  
    getchar();
    return 0;
}


