#include <stdio.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int i = 0, j = 0;
    int numeroA = 0, numeroB = 0;
    int tam = 5;
    int ini = 1;
    int fim = 10;

    int matrizA[tam][tam];
    int matrizB[tam][tam];
    int matrizC[tam][tam];

    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            numeroA = ini + rand()%(fim - ini + 1);
            numeroB = ini + rand()%(fim - ini + 1);
            matrizA[i][j] = numeroA;
            matrizB[i][j] = numeroB;
        }
    }

    printf("\nMatriz A:\n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma Matriz A + Matriz B:\n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }



    return 0;
}
