#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    float *f;
    double *d;
    char *c;

    printf("Size of integer pointer %d bytes\n", sizeof(p));
    printf("Size of float pointer %d bytes\n", sizeof(f));
    printf("Size of double pointer %d bytes\n", sizeof(d));
    printf("Size of char pointer %d bytes\n", sizeof(c));

    printf("\n\n");

    printf("Size of integer %d bytes\n", sizeof(*p));
    printf("Size of float %d bytes\n", sizeof(*f));
    printf("Size of double %d bytes\n", sizeof(*d));
    printf("Size of char %d bytes\n", sizeof(*c));

    return 0;
}
