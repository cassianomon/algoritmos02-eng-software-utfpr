#include <stdio.h>

int* alocarMatriz(int n){
    int **matriz;
    matriz = malloc(n * sizeof(int *));
    int i, j;
    for (i = 0; i < n; i++) {
        matriz[i] = malloc (n * sizeof(int *));
    }

    return matriz;
}

int main(void){
    int n;
    int matriz;

    printf("Digite um valor: ");
    scanf("%d", &n);

    matriz = alocarMatriz(n);
    printf("\nEnd. matriz: %d", matriz);

}



