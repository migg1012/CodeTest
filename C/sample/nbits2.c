
#include <stdio.h>
long int numbits;
long int temp;
void binry(long n)
{
    if(n > 1)
    {
        binry(n/2);
    }
    if(n%2 == 0)
    {
        numbits+=1;
        return;
    }
    if(temp<numbits)
    {
        temp = numbits;
    }
    numbits = 0;
}


int main()
{
    long n =1800;

    binry(n);


}
