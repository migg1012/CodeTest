#include <stdio.h>

// recursive function to count set bits


int main()
{
    unsigned int n = 69;
    int cnt=0,idx=0, i=0,  j;
    unsigned int temp;

    temp = n;
    while(temp)
    {
        temp>>=1;
        cnt++;
    }
    j = cnt;
    printf("%d\n",j);
    int arr[j];


    while(n)
    {

        printf("%d\n",n);
        while(n&1)
        {
            n>>=1;
            arr[idx] = 0;
            //i=0;
            printf("%d\n",arr[idx]);
            idx++;
            while(!(n&1))
            {
                arr[idx] = i++;
                printf("%d\n",arr[idx]);
                n>>=1;
                idx++;
            }
        }
        n>>=1;
    }






    printf("\n%d",cnt);
    return 0;
}
