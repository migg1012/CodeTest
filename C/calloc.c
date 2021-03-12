#include <stdio.h>
#include <stdlib.h>
//malloc,  alloc, realloc
//dynamically allocated in the heap area
//allocates in bytes
//returns a base pointer
//not aware of type
//malloc does not initialized memory
//realloc grow or shrink memory of existing dynamic memory

int main()
{
    int *p, n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    p = (int *)calloc(n , sizeof(int));

    if(p == NULL)
    {
     printf("Cannot allocate memory.");
     exit(1);
    }

    for(i=0; i < n; i++)
    {
    printf("Enter number%d: ",i+1);
    scanf("%d", p+i);
    //scanf("%d", &p[i]);  another way to access array location
    }

    for(i=0; i < n; i++)
    {
    printf("Value i\[%d\] is %d.\n",i,*(p+i));
    }

    for(i=0; i < n; i++)
    {
    printf("Value i\[%d\] is %d.\n",i, p[i]);
    }

    int newsize;
    printf("Increase size by: ");
    scanf("%d", &newsize);

    p = (int *)realloc(p, newsize * sizeof(int));
    if(p == NULL)
    {
    printf("Failed to grow array.");
    exit(1);
    }
    for(i=0; i < newsize; i++)
    {
    printf("Enter new value for i\[%d\]: ",n+i,i);
    scanf("%d", p+n+i);
    }

    for(i=0; i < newsize+n;i++)
    {
    printf("Values for i\[%d\] is %d\n", i, *(p+i));
    }
    free(p);

    return 0;
}
