#include <stdio.h>

int factorial(int n)
{
    //base case
    if (n==0 || n == 1)
    {
        return 1;
    }
    //recursive case
    return n * factorial(n-1);
    


}

int main(int argc, char const *argv[])
{
    int input = 5;
    int value;

    value = factorial(5);
    printf("%d", value);
    return 0;
}
