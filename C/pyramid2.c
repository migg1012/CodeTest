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
int k = 1, j = 1, col = 1;

void drawPyramid(int height)
{
    int mid = (2 * height) / 2;
    int numcols = 2 * height - 1;
    for (int row = 0; height > row; row++)
    {
        for (int col = 1; col <= numcols; col++)
        {
            if(mid-row <= col && mid+row >= col)
            {
                printf("1");
            }
            else
            {
                printf("0");

            }
            
        }

        printf("\n");
    }

    return;
}

int main(int argc, char const *argv[])
{
    int height;

    printf("Enter pyramid height: ");
    scanf("%d", &height);
    printf("\n");
    drawPyramid(height);
    printf("\n");

    return 0;
}
