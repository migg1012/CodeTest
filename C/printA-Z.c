//Capital A-Z starts at 65 and ends with 90
//Small letters starts at 97
//The difference is 32

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 65;
    printf("ASCII value  - Capital\tSmall Letter\n");
    for(i=65; i<91;i++)
    {
        printf("   %d \t\t %c\t  %c\n", i, i, i+32);
    }
    return 0;
}
