#include <stdio.h>
int linhas = 5;
int colunas = 10;
int matriz[5][10];

void preencher(void)
{
    int i, j;
    static int Valor = 3;

    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            matriz[i][j] = Valor;
            Valor += 2;
        }
    }
}

void imprimir(void)
{
    int i, j;
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
}

int main(void)
{
    printf("Primeira matriz:\n");
    preencher();
    imprimir();

    printf("Segunda matriz:\n");
    preencher();
    imprimir();

    return 0;
}
