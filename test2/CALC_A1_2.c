#include <stdio.h>

int MD_SEL(int, int);

int main()
{
    int A;
    int B;
    scanf("%d", &A);
    scanf("%d", &B);
    int R;
    R = MD_SEL(A, B);
    printf("R = %d ", R);

    return 0;
}