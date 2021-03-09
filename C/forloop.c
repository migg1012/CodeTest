//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    //Typical usage
    for(i=1; i <= 3; i++)
    {
        printf("Hello world number %d\n", i);
    }
    printf("\n\n");

    //usage with a twist
    for(i=1, printf("Hi\n"); i <= 3; i++, printf("Ho\n"))
    {
        printf("Hello world number %d\n", i);
    }
    printf("\n\n");

    //intializing increment outside for loop
    i = 1;
    for(; i <= 3;)
    {
        printf("Hello world %d time\n", i);
        i++;
    }

    int sum;
    for(sum = 0, i = 1; i <= 6; sum = sum + i, i++);

    printf("%d", sum );

    return 0;
}
