#include <stdio.h>


void invert(int* arr, int arrlen)
{
    //base case
    if(arrlen>1)
    {
        arrlen=arrlen-1;
        printf("%d ", arr[arrlen]);
        invert(arr, arrlen);
        return;
    }
    if(arrlen==1){
    printf("%d ", arr[arrlen-1]);
    return;
    }
}
int main()
{
    int inputArr[] = {5 , 4, 3,  2, 1};
    int size = 5;

    invert(inputArr, size);
    
    getchar();
    return 0;
}
