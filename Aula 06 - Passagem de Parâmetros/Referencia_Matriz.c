#include <stdio.h>

void preencher(int matriz[][10], int L, int C)
{
    int i, j;
    static int Valor = 3;

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            matriz[i][j] = Valor;
            Valor += 2;
        }
    }
}

void imprimir(int m[][10], int L, int C)
{
    int i, j;
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int linhas = 5;
    int colunas = 10;
    int MAT[linhas][colunas];

    printf("Primeira matriz:\n");
    preencher(MAT, linhas, colunas);
    imprimir(MAT, linhas, colunas);

    printf("Segunda matriz:\n");
    preencher(MAT, linhas, colunas);
    imprimir(MAT, linhas, colunas);

    return 0;
}
