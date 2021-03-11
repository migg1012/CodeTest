//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int *p;
    int **k;
    int x = 123;
    p = &x;
    k = &p;

    printf("The address of x is %p\n", p );
    printf("The value of x via *p %d\n", *p );
    printf("The value of x via **k %d\n", **k );

    printf("\n\n");
    x++;
    printf("The value of x using x++ %d\n", x );
    *p = *p + 1;
    printf("The value of x using *p+1 %d\n", *p );
    **k = **k + 1;
    printf("The value of x using **k+1 %d\n", **k );
    return 0;
}
