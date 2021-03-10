//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80] = "Hello world";
    printf("%s\n", str1);
    //initializing string or character array
    // string are implicitly null terminated
    // null = \0

    char str2[80];
    strcpy(str2, "Hello me");
    printf("%s", str2);

    return 0;
}
