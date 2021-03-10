//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <math.h>

//prototype the function
int getTotalDigits(int);
int isArmstrongNum(int);

int getTotalDigits(int number)
{
    int counter = 0;
    while(number>0)
    {
        number = number/10;
        counter++;
    }
    return counter;
}

int isArmstrongNum(int number)
{
    int sum = 0;
    int count = getTotalDigits(number);
    int temp = number;

    while(number > 0)
    {
        sum = sum + pow(number%10, count);
        number = number/10;
    }
    return temp == sum;

}

int main()
{
    printf("%d is number of digit of 17935.\n\n\n", getTotalDigits(17935));

    int i;
    for (i=0; i<=50000; i++)
    {
        if(isArmstrongNum(i))
            {
                printf("%d is Armstrong number.\n", i);
            }
    }

    return 0;
}
