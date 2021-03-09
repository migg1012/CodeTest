//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3, b = 5, t;

    t = a>b ? a : b;

    printf("The value of t is %d\n", t);
    fflush(stdin);

    int age;
    printf("Please enter age: ");
    scanf("%d", &age);
    age >= 13 && age <= 19 ? printf("You are a teenager."): printf("You are not a teenager.");

    return 0;
}
