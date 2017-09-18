#include <stdio.h>

void troca(int A, int B)
{
    int aux;

    aux = A;
    A = B;
    B = aux;
}

int main(void)
{
    int X, Y;

    X = 5;
    Y = 10;

    troca(X, Y);

    printf("X = %d\n", X);
    printf("Y = %d\n", Y);

    return 0;
}


