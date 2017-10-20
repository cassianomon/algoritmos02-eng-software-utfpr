#include <stdio.h>

int main(void){

    int cont = 0;
    int tamanho = 10;
    int vet[tamanho], i = 0;
    int pares[tamanho], impares[tamanho];


    for (i == 0; i < tamanho; i++){
        do{
            printf("\nDigite um numero inteiro para a posicao %d: ", i);
            scanf(" %d", &vet[i]);
        }while(vet[i] < 0);
    }

    printf("Pares:");
    for(i = 0; i < tamanho; i++){
        if (vet[i]%2 == 0){
            printf("\nVetor[%d] = %d eh par", i, vet[i]);
        }
    }

    printf("\n\n\n");
    printf("Divisiveis por 3 e 5");
    for(i = 0; i < tamanho; i++){
        if ((vet[i]%3 == 0) && (vet[i]%5 == 0)){
            printf("\nVetor[%d] = %d eh divisivel por 3 e 5", i, vet[i]);
            cont++;
        }
    }
    printf("\n%d valores sao divisiveis por 3 e 5 ao mesmo tempo", cont);

    printf("\n\n\n");
    printf("Menores que 10 e maiores que 100:");
    for(i = 0; i < tamanho; i++){
        if (vet[i] < 10 ){
            printf("\nVetor[%d] = %d eh menor que 10", i, vet[i]);
        } else if ( vet[i] > 100){
            printf("\nVetor[%d] = %d eh maior que 100", i, vet[i]);
        }
    }

    printf("\n\n\n");
    printf("Maiores que 10 e menores que 100:");
    for(i = 0; i < tamanho; i++){
        if (vet[i] > 10 && vet[i] < 100){
            printf("\nVetor[%d] = %d eh maior que 10 e menor que 100", i, vet[i]);
        }
    }

    cont = 0;
    printf("\n\n\n");
    printf("Impares:");
    for(i = 0; i < tamanho; i++){
        if (vet[i]%2 == 1){
            printf("\nVetor[%d] = %d eh impar", i, vet[i]);
            cont++;
        }
    }
    printf("\n%d valores sao impares\n\n", cont);


    return 0;
}
