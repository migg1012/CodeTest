?*
    Author: Marcor Santos
    Armstrong Number
*/
#include <stdio.h>

int sum = 0; 

int sumOfDigits(int num)
{
    int rem;
    if(num == 0)
    {
        return sum;
    }
    if(num>0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + (rem * rem * rem);
        return sumOfDigits(num);
    }
}

void getArmstrong(int num)
{
    if(num==1)
    {
        printf("%d is an armstrong number.\n", num);
        return;
    }
    if(num<=100 && num > 1)
    {
        num = num - 1;
        getArmstrong(num);
        return;
    }
    if(num>100)
    {
        if(num == sumOfDigits(num))
        {
            printf("%d is an armstrong number.\n", num);
            num=num-1;
            getArmstrong(num);
            return;

        }
    }
    //return;
}

int main()
{
    int testNum = 153;
    int cube;

    getArmstrong(400);

    getchar();

    return 0;
}