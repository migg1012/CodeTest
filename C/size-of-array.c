#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1 ,2, 3, 4, 5};

    int size_in_bytes = sizeof(a);
    int array_size = sizeof(a)/sizeof(a[0]);

    printf("Array size in bytes: %d bytes\n", size_in_bytes);
    printf("Array element count: %d items", array_size);
    return 0;
}
