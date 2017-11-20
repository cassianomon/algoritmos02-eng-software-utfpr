#include <stdio.h>

void **liberaMatriz(int** mat, int linha){
    int i;
    for (i = 0; i < linha; i++){
        free (mat[i]);
    }

    free(mat);
}

int main(void){
    int n, i;
    int **matriz;

    printf("Digite um valor: ");
    scanf("%d", &n);

    matriz = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++){
        matriz[i] = malloc(n * sizeof(int *));
    }

    liberaMatriz(matriz, n);

}


