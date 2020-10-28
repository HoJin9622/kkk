#include <stdio.h>
#include <stdlib.h>

int MUL_SUM(int, int);

int main(int argc, char *argv[])
{
    int A;
    int B;
    B = atoi(argv[1]);
    scanf("%d", &A);
    int R;
    R = MUL_SUM(A, B);
    printf("R = %d ", R);

    return 0;
}