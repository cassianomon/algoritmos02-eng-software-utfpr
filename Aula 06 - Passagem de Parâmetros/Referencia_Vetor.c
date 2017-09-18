#include <stdio.h>

void preencher(int* vetor, int tamanho)
{
    int i;
    for(i = 0; i < tamanho; i++)
    {
        vetor[i] = i*2;
    }
}

void imprimir(int* vet, int tamanho)
{
    int i;
    for(i = 0; i < tamanho; i++)
    {
        printf("VETOR[%d] = %d\n", i, vet[i]);
    }
}

int main(void)
{
    int tam = 10;
    int VET[tam];

    preencher(VET, tam);
    imprimir(VET, tam);

    return 0;
}
