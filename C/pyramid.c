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
int k=1, j=1; newheight;
void drawPyramid(int height)
{
    for(int i = 1; height >= i; i++)
    {
        for(k=i;((2*height)/2)-1 >= k;k++)
        {
            printf("a");
            
        }
        
        for(j = k;  height*2 >= j;  j++)
        {
            printf("#");
        }
        
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










