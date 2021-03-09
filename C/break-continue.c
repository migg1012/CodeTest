//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    for(count = 1; count <= 50; count++)
    {
        if(count/5 >= 6)
        {
            break;
        }
        printf("Count value is %d\n", count);
    }


    for(count = 1; count <= 50; count++)
    {
        if(count%2 == 0)
        {
            continue;
        }
        printf("Count value is %d\n", count);
    }
    return 0;
}
