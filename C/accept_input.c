//Different format specifier
// %i  %d  -  for integers
// %f   %lf - for decimal numbers
// %c  - for characters
// %s - for multiple characters

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float gpa;
    double gpa2;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%i", &age);
    printf("You are %i year old.\n", age);
    printf("You are %d year old.\n\n", age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Your GPA is %f.\n\n", gpa);

    printf("Enter you GPA again: ");
    scanf("%lf", &gpa2);
    printf("Your GPA again is %f.", gpa2);

    printf("Enter your grade: ");
    grade = getchar();
    printf("Your grade is %c ", grade);

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your name is %s ", name);

    printf("Enter your name: ");
    fgets(name,30, stdin);
    printf("Your name is %s", name);

    getchar();
    return 0;
}
