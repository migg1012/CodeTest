//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

void printMe(unsigned int count)
{
    if(count == 0)
        return;

    printf("%d\n", count);
    count--;
    printMe(count);
}

int main()
{
    printMe(100);  // prints 3 2 1
    return 0;
}
