//pointer + 1  will add the sizeof type into the pointer
// integer,  float and double has 8 bytes
// char has 1 byte

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int *p, *y;
    int x = 123;
    int *w = (int *)10000;
    int *z = (int *)2000;
    double *a = (double *)20000;
    double *b = (double *)12000;
    char *e = (char *)30000;
    char *f = (int *)22000;
    p = &x;
    char c;
    y = &c;

    printf("The initial value of pointer p is %p\n", p );
    p++;
    printf("The value of pointer p after p++ is %p\n", p );

    printf("\n\n");

    printf("The initial value of pointer y is %p\n", y );
    y++;
    printf("The value of pointer y after y++ is %p\n", y );

    printf("\n\n");

    printf("The number of location between int pointers  w and z is %d\n", w - z );  //2000 because 10000 - 2000  = 8000 divided by sizeof integer which is 4 bytes
    printf("The number of location between double pointers  a and b is %d\n", a - b );  //1000 because 20000 - 12000  = 8000 divided by sizeof double which is 8 bytes
    printf("The number of location between char pointers  e and f is %d\n", e - f );  //8000 because 30000 - 22000  = 8000 divided by sizeof char which is 1 byte

    return 0;
}
