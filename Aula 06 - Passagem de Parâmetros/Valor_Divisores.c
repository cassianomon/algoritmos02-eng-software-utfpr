#include <stdio.h>

void divisores(int num)
{
    int i = 1;
    printf("Divisores de %d: ", num);
    for(i = 1; i <= num; i++)
    {
        if( (num%i) == 0 ) printf("%d ", i);
    }

    printf("\n\n");
}

int main(void)
{
    int valor = 10;
    divisores(valor);
    divisores(50);
    divisores(35);
    valor = 7;
    divisores(valor);

    return 0;
}


