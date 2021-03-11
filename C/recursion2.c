//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

void printMe(unsigned int);

int main()
{
    printMe(100);  // prints 3 2 1
    return 0;
}

void printMe(unsigned int count)
{
    if(count == 0)
        return;

    printMe(count-1);
    printf("%d\n", count);  //pushed into stack value 3 and so on and pops everything when count = 0

}
