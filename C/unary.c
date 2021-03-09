//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y;

    y = x++;  // post increment
    printf("Value of x = %d and y = %d\n", x, y);


    y = ++x;  // pre increment
    printf("Value of x = %d and y = %d\n", x, y);


    y = x--; // post decrement
    printf("Value of x = %d and y = %d\n", x, y);

    y = --x;  // pre decrement
    printf("Value of x = %d and y = %d\n", x, y);

    return 0;
}
