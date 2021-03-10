//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <math.h>


int isPrimeNum(int number)
{
    int i;
    for(i=2; i<= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int count;
    for(count = 10; count <=100; count++)
        if(isPrimeNum(count))
            printf("%d is a prime number\n", count);


    return 0;
}
