#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencher(int* vetor, int tamanho, int valorInicio, int valorFim){
    int diff = valorFim - valorInicio;
    int random = 0;

    int i;
    for(i = 0; i < tamanho; i++){
        random = rand()%(valorFim - valorInicio) + valorInicio;
        vetor[i] = random;
    }
}

void contarParesImpares(int* vetor, int tamanho, int* cp, int* ci){
    int i;
    for(i = 0; i < tamanho; i++){
        if(vetor[i]%2 == 0){
            (*cp)++;
        } else {
            (*ci)++;
        }
    }
}

void imprimirVetor(int* vetor, int tamanho){
    int i;
    printf("\nConteudo do Vetor:");
    for(i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor[i]);
    }
}

void separarVetor(int* vetor, int tamanho, int* vetorPar, int cp, int* vetorImpar, int ci){
    int j=0, i=0, p=0;

    for(j = 0; j < tamanho; j++){
        if(vetor[j]%2 == 0){
            vetorPar[p] = vetor[j];
            p++;
        } else {
            vetorImpar[i] = vetor[j];
            i++;
        }
    }
}

int main(){
    srand((unsigned) time(NULL));

    int tamanho = 11;
    int vetor[tamanho];
    int cp = 0, ci = 0;
    int i = 0;


    preencher(vetor, tamanho, 1, 3);

    contarParesImpares(vetor, tamanho, &cp, &ci);

    printf("Pares: %d", cp);
    printf("\nImpares: %d", ci);
    printf("\n\n");

    printf("\n\Vetor total:");
    imprimirVetor(vetor, tamanho);

    int vetorPar[cp];
    int vetorImpar[ci];

    separarVetor(vetor, tamanho, vetorPar, vetorImpar);

    printf("\n\nVetor Par:");
    imprimirVetor(vetorPar, cp);

    printf("\n\nVetor Impar:");
    imprimirVetor(vetorImpar, ci);
}
