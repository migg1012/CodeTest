//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,t;

    printf("Enter 2 integer values:  ");
    t = scanf("%d %d", &x, &y);

    printf("Successfully scanned %d values.\n", t);
    printf("The values are %d and %d", x, y);

    return 0;
}
