/*
Create a function
pyramid on screen.
            *
           ***
          *****
         *******

Input is a positive number that tells how many rows.

vertical   f(x) = x + 1
horizontal f(x) = 2x - 2
start of print f(x) = x/2 + 1
*/

#include <stdio.h>
int k=1, j=1; col=1;
void drawPyramid(int height)
{
    for(int i = 1; height >= i; i++)
    {
        for(k=i;((2*height)/2)-1 >= k;k++)
        {
            printf("a");
            
        }
        
        for (col; col > 0; col--)
        {
            printf("#");
        }        
        
        col=col+2;
        
        printf("\n");
    }



    return;
}

int main(int argc, char const *argv[])
{
    int height = 4;

    drawPyramid(height);
    printf("\n");\
    
    return 0;
}










