#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float gpa;
    double gpa2;
    char grade;
    char name[30];

    printf("Enter your grade: ");
    scanf("%c",&grade);
    printf("Your grade is %c \n", grade);
    fflush(stdin);

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your name is %s \n", name);
    fflush(stdin);

    printf("Enter your name: ");
    fgets(name,30, stdin);
    printf("Your name is %s", name);
    fflush(stdin);

    getchar();
    return 0;
}
