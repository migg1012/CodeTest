#include <stdio.h>
#include <stdlib.h>
//creates a 2 dimensional array
//deallocate memory after using to prevent memory leaks

int ** Array2D(int nRows, int nCols)
{
    int **a;
    a = (int **)malloc(nRows * sizeof(int *));
    if(a == NULL)
        exit(1);
    int i;
    for(i=0;i<nRows;i++)
    {
        *(a+i) = (int *)malloc(nCols * sizeof(int));
        if(*(a+i) == NULL)
        {
            exit(1);
        }
    }

    return a;
}

void inputValues(int nRows, int nCols, int **a)
{
    int i, j;
    for(i=0;i<nRows;i++)
    {
        for(j=0;j<nCols;j++)
        {
            printf("Enter value for row %d of column %d: ", i, j);
            scanf("%d",(*(a+i)+j));
        }
    }
}

void printValues(int nRows, int nCols, int **a)
{
    int i, j;
    for(i=0;i<nRows;i++)
    {
        for(j=0;j<nCols;j++)
        {
            printf("%8d", *(*(a+i)+j));
        }
        printf("\n");
    }
}

void deAllocate(int nRows, int **a)
{
    int i, j;
    for(i=0;i<nRows;i++)
    {
        free(*(a+i));
    }
}


int main()
{

    int **p;

    int nRows, nCols;
    printf("Enter number of Rows: ");
    scanf("%d", &nRows);
    printf("Enter number of Columns: ");
    scanf("%d",&nCols);

    p = Array2D(nRows, nCols);
    inputValues(nRows, nCols, p);
    printValues(nRows, nCols, p);
    deAllocate(nRows, p);

    return 0;
}
