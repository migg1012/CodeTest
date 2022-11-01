#include <stdio.h>

int main()
{
    char ast = '\*';
    int test = 5, j;

    for(int i=0; i<test; i++)
    {
        j=test-(test-i);
        while(j>=0)
        {
            printf("%c ", ast);
            j--;
        }
        printf("\n");
    }

    return 0;
}