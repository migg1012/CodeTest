//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <string.h>

int main()
{
    char str2[80];
    printf("Enter a string: ");
    scanf("%[A-Za-z ]", str2);

    //Counting sting length using for loop
    int i, alphabet = 0, spaces = 0;
    for(i=0; str2[i] != '\0'; i++)
    {
        if((str2[i]>='A' && str2[i]<='Z') || (str2[i]>='a' && str2[i]<='z'))
            alphabet++;
        else if(str2[i] == ' ')
            spaces++;
    }

    printf("The number of letters is %d\n", alphabet);

    printf("The number of spaces is %d", spaces);

    return 0;
}
