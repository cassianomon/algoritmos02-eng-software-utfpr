#include <stdio.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    int i = 0, j = 0;
    int numero = 0;
    int tam = 5;
    int ini = 10;
    int fim = 100;

    int matriz[tam][tam];

    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            numero = ini + rand()%(fim - ini + 1);
            matriz[i][j] = numero;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
