//Return value of printf() is the number of characters successfully printed on stdout

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i =  printf("Marcor");
    printf("\n");
    printf("Successfully printed %d characters.\n", i);

    printf("Successfully printed %d characters.\n", printf("Marcor"));


    return 0;
}
