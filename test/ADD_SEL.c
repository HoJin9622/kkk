#include <stdio.h>

int ADD_SEL(int A, int B)
{
    if( A % 4 == 0 ) return B;
    if( A % 4 == 1 ) return B + 1;
    if( A % 4 == 2 ) return B + 2;
    else return B + 3;
}