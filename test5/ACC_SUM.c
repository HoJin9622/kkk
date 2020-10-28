#include <stdio.h>

int ACC_SUM(int A)
{
    int sum = 0;

   for(int i=0; i < A+1; i++) {
       sum += i+3;
   }

   return sum;
}