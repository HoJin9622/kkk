#include <stdio.h>
#include <stdlib.h>

void grade(int);

int main(int argc, char *argv[])
{
    int A;
    A = atoi(argv[1]);
    grade(A);

    return 0;
}