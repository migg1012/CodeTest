
#include <stdio.h>

// recursive function to count set bits
    long bits = 0;
    long max = 0;

void binary(long N) {
    if (N > 1) {
        binary(N / 2);
    }
    if (N % 2 == 0) {
        bits += 1;
        return;
    }
    if (max < bits) {
        max = bits;
    }
    bits = 0;
}

long solution(long N) {
    binary(N);
    return max;
}

int main()
{
    long N = 1800;
    long sol;


    sol = solution(N);
    printf("%d",sol);
    return 0;
}
