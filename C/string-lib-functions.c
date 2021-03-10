//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[80] = "Marcor";
    char surname[80] = "Santos";

    //concat strings
    strcat(firstname, " ");
    strcat(firstname, surname);
    printf("%s\n", firstname);

    //string compare
    //value of strcmp is 0 if equal.
    //value of strcmp is negative if first element is smaller or is charcacter "a" or near "a"
    //value of strcmp is positive if first element is greater
    int i;

    i = strcmp("abc","abc");
    printf("value of strcmp is %d\n", i);

    i = strcmp("abc","xyz");
    printf("value of strcmp is %d\n", i);

    i = strcmp("xyz","abc");
    printf("value of strcmp is %d\n", i);

    return 0;
}
