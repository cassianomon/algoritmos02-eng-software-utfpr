#include <stdio.h>

int fatorial(int n)
{
    int i, fat = 1;
    for(i = 1; i <= n; i++)
    {
        fat = fat * i;
    }
    return fat;
}

int fatorialR(int n)
{
    if(n == 1) return 1;

    return n * fatorialR(n - 1);
}

int main(void)
{
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("%d! iterativo: %d\n\n", n, fatorial(n));

    printf("%d! recursivo: %d\n\n", n, fatorialR(n));

    return 0;
}
