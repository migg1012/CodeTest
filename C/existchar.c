#include <stdio.h>

int* result(char* strarr)
{
    printf("Inside the function.\n\n");
    return 0;
}
int main(int argc, char const *argv[])
{
    int* results;
    char arrOfSting[3][6] = { {'y','e','l','l','o','w'},
                          {'m','e','a','t','e','r'},
                          {'c','r','e','a','m','y'}};

    int arrptr = arrOfSting;
    /* code */

    results = result(arrptr);
    printf("Press ENTER to exit.");
    getchar();
    return 0;
}
