#include <stdio.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int i = 0, j = 0;
    int numero = 0;
    int tam = 5;
    int ini = 1;
    int fim = 10;

    int matriz[tam][tam*2];
    int vet[tam];

    for(i = 0; i < tam; i++){
        for (j = 0; j < (tam*2); j++){
            numero = ini + rand()%(fim - ini + 1);
            matriz[i][j] = numero;
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < tam; i++){
        vet[i] = 0;
        for (j = 0; j < (tam*2); j++){
            printf("%d\t", matriz[i][j]);
            vet[i] += matriz[i][j];
        }
        printf("\n");
    }

    for(i = 0; i < tam; i++){
        printf("\nSoma linha %d: %d", i, vet[i]);
    }
    printf("\n");

    return 0;
}
