#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x = 300;
    int *p;
    char *k;
    k = (char *)&x;


    printf("\n\n");

    printf("Value of x using x is %d\n", x);
    printf("Address of x using pointer p %d\n", p);
    printf("\n\n");
    printf("Cast 1 byte of *p to char %d\n", *k);
    printf("Address of pointer k %d\n", k);
    k++;
    printf("Increment *k by 1 byte %d\n", *k);
    printf("Address of pointer k %d\n", k);

    return 0;
}
