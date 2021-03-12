#include <stdio.h>
#include <stdlib.h>
//malloc,  alloc, realloc
//dynamically allocated in the heap area
//allocates in bytes
//returns a base pointer
//not aware of type
//malloc does not initialized memory

int main()
{
    int *p, n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

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
    free(p);

    return 0;
}
