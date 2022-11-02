#include <stdio.h>
int sum=0;
int recurnum(int arr[], int num)
{
    
    if (num==1)
    {
        /* code */
        num-=1;
        sum=sum+arr[num];
        return sum;
    }
    if(num>1)
    {
        num-=1;
        sum=sum+recurnum(arr,num);
        return sum;
    }
    return sum;
}


int main(int argc, char const *argv[])
{
    int num[4] = {1,9,5,6};
    int size = 4;
    /* code */
    
    printf("%d",recurnum(num,size));
    getchar();
    return 0;
}
