//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

unsigned long fib(int);

int main()
{
    //fib(5);  // prints 3 2 1
    printf("The fibonacci is %d\n",fib(30) );
    return 0;
}

unsigned long fib(int fibth)
{
    unsigned long result;

    if(fibth==1 || fibth ==2){
        return 1;
    }
    else
    {
    result = fib(fibth-1) + fib(fibth-2);
    }


}
