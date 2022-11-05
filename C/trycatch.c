#include <stdio.h>

int main(int argc, char const *argv[])
{
    int result, num;

    printf("Enter a number to divide by zero: \n");
    scanf("%d", &num);
    
    try
    {
        result = num / 0;
    }
    catch(e)
    {
        printf(e);
    }

    printf("End of program!");
    getchar();
    return 0;
}