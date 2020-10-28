#include <stdio.h>

void grade(int A)
{
   if(A >= 90)
   {
       printf("Your grade is very excellent\n");
   }
   else if(A >= 80)
   {
       printf("Your grade is good\n");
   }
   else
   {
       printf("You must study hard\n");
   }
}