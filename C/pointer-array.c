#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = { 5, 10, 15, 20, 30};

    printf("Array address using a %p\n",a);
    printf("Array address using &a %p\n",&a);
    printf("Content of array using *\(a+i\) at %p\n",&a);
    int i;
    for(i=0; i<5; i++)
    {
        printf("%4d", *(a+i));
    }
    printf("\n");

    printf("Content of array using a[i] at %p\n",&a);
    for(i=0; i<5; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");

    printf("Content of array using i[a] at %p\n",&a);
    for(i=0; i<5; i++)
    {
        printf("%4d", i[a]);
    }
    printf("\n");

    return 0;

}
