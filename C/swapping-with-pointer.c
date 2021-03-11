#include <stdio.h>
#include <stdlib.h>

void swapwithpointer(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapwithoutpointer(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 25, b = 52;

    printf("Initial of a = %d and b = %d \n", a, b);
    printf("\n\n");
    swapwithoutpointer(a,b);
    printf("Pass value without pointer: value a = %d and b = %d\n", a, b );
    printf("\n\n");
    swapwithpointer(&a, &b);
    printf("Pass using pointer value: value of a = %d and b = %d \n", a, b );


    return 0;
}
