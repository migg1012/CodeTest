#include <stdio.h>


typedef struct{
	char name[20];
	int year;
	double grade;
} Student;

void inputStudentValues(Student *sp)
{
    printf("Enter Student name: ");
    scanf("%[^\n]", sp->name);
    fflush(stdin);
    printf("Enter Student year: ");
    scanf("%d", &sp->year);
    fflush(stdin);
    printf("Enter Student grade: ");
    scanf(" %lf", &sp->grade);
}

void printStudent(Student *sp)
{
        printf("\n%s is on year %d with a grade of %3.2lf.", sp->name, sp->year, sp->grade);
}


 int main()
 {
     Student s1;
     Student *sp;

     sp = &s1;

     sp->grade  = 3.5;

     printf("%3.2f", s1.grade);
     printf("\n");

     inputStudentValues(sp);
     printStudent(sp);



    return 0;
}
