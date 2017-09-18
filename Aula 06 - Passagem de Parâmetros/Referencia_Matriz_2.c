#include <stdio.h>
#include <stdlib.h>

void preencher(int **matriz, int L, int C)
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

void imprimir(int **m, int L, int C)
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
    int i;
    int linhas = 5;
    int colunas = 10;

    //ALOCAÇÃO DINÂMICA
    int **mat = (int **)malloc(sizeof(int)*linhas);
    for (i = 0; i < linhas; i++)
      mat[i] = (int *)malloc(sizeof(int)*colunas);

    printf("Primeira matriz:\n");
    preencher(mat, linhas, colunas);
    imprimir(mat, linhas, colunas);

    printf("Segunda matriz:\n");
    preencher(mat, linhas, colunas);
    imprimir(mat, linhas, colunas);

    return 0;
}


