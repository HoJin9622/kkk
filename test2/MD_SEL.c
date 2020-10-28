#include <stdio.h>

int MD_SEL(int A, int B)
{
    if((A+B)%2 == 0) return (A+B)*2;
    else return (A+B)/2;
}