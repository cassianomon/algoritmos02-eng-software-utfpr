#include <stdio.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int i = 0, j = 0;
    int numero = 0;
    int tam = 6;
    int somaP = 0, somaS = 0;

    int matriz[tam][tam];

    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            numero = rand()%11;
            matriz[i][j] = numero;
            printf("%4d", matriz[i][j]);
            if(i == j){
                somaP += matriz[i][j];
            }
            if ((i + j) == tam - 1){
                somaS += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("\nSoma diagonal principal: %d", somaP);
    printf("\nSoma diagonal secundaria: %d", somaS);

    return 0;
}
