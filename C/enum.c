#include <stdio.h>


typedef enum{
	SUN, MON, TUE, WED, THURS, FRI, SAT
} days_of_week;

typedef enum{
    FALSE, TRUE
} Boolean;

Boolean isEven(int n)
{
    if(n % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

 int main()
 {
     days_of_week day = MON;

     if(day == SUN || day == SAT)
     {
         printf("Rest day.\n");
     }
     else
     {
         printf("Work day.\n");
     }




    return 0;
}
