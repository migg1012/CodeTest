//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k, i;
    long t = time(NULL);

    srand(t);   //change seed of random gen
    for(i=1; i<=10; i++)
    {
    k=rand() % 1000;
        //k=rand() % 100 -  to generate 2 digit random number
        //k=rand() % 1000 -  to generate 3 digit random number
        //k=rand() % 10000 -  to generate 42 digit random number
    printf("%d\n",k);
    }

    return 0;
}
