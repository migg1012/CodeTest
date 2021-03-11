//Return value of scanf() is the number of successfully scanned items on stdin

#include <stdio.h>
#include <stdlib.h>

void toh(int numdiscs, int source, int aux, int dest)
{
   if(numdiscs==1){
    //just pick and place
    printf("Move the disc from tower %d to tower %d\n", source, dest);
    return;
   }
   //move all n-1 discs to aux
   toh(numdiscs-1, source, dest, aux);
   toh(1,source,aux,dest);
   toh(numdiscs-1,aux,source,dest);
}

int main()
{
    toh(5,1,2,3);
    return 0;
}
