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

    do{
     printf("Hello %d\n", i);
     i++;
    } while(i <= 3);

    return 0;
}
