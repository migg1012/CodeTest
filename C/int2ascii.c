#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;

    printf("Enter a single character: ");
    scanf("%c", &input);
    printf("\n The ascii value is: %d \n", input);
    getchar();
    return 0;
}
