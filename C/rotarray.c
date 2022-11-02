
#include <stdio.h>


int main()
{
    int n[5] = {5, 8, 16, 32, 64};
    int i=0,j=0,arrlength, numrot,temp;
    numrot = 2;
    arrlength = sizeof(n) / sizeof(n[0]);
    printf("%d",arrlength);

/*
    for(i=1; i<=numrot; i++)
    {
        for(j=0; j<arrlength-1; j++)
        {
            if (j+1 <= arrlength-1)
            {
                temp = n[j+1];
                n[j+1] = n[j];
            }
            else
            {
                temp = n[arrlength-1];
                n[0] = temp;
                n[arrlength-1] = n
            }
            
        }
    }

    for(i=0; i<arrlength; i++)
    {
        printf(" %d ", n[i]);
    }
*/    
    return 0;
}
