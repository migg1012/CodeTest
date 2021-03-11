//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

int globalvar;  //Global variable

void autotest()
{
    extern int global2;
    auto int val1;
    printf("global variable from autotest function %d\n", globalvar);
    printf("%d\n", val1);
    val1++;
    printf("%d\n", val1);
    printf("global2 from autotest function %d\n", global2);
}

void statictest()
{
    extern int global2;
    static int val1;
    printf("global variable from statictest function %d\n", global2);
    printf("%d\n", val1);
    val1++;
    printf("%d\n", val1);
    printf("global2 from statictest function %d\n", global2);
}

int main()
{
    extern int global2;
    globalvar = 100;
    printf("global variable from main function %d\n", globalvar);
    autotest();
    statictest();
    statictest();
    statictest();
    printf("global2 from main function %d\n", global2);
    return 0;
}

int global2;  // use extern to access this variable


