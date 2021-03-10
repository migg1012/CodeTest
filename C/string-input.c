//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80];
    //initializing string or character array
    // string are implicitly null terminated
    // null = \0

    printf("Enter your name: ");
    scanf("%s", str1);
    printf("Your name is %s\n", str1);
    fflush(stdin);


    //PATTERN MATCHING
    // [ABCDE] - square brackets for pattern
    // [A-Za-z]  accepts both capital and small letters
    // [A-Za-z ]  accepts both capital and small letters and space
    // [^\n]  accepts any keyboard character except new line character
    char str2[80];
    printf("Enter your name and will pattern match: ");
    scanf("%[A-Za-z ]", str2);
    printf("Welcome %s\n", str2);

    //Counting sting length using for loop
    int i = 0;
    for(; str2[i] != '\0'; i++);

    printf("The length of the string is %d\n", i);

    //length of string using strlen
    int c = strlen(str2);
    printf("The value using strlen is %d", c);

    return 0;
}
