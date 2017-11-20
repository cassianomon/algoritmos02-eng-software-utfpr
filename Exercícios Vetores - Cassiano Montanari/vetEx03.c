#include <stdio.h>

int main(void){

    int tamPar = 0, tamImpar = 0, tamVet = 15;
    int vet[tamVet], i = 0, ip = 0, ii = 0;

    for (i == 0; i < tamVet; i++){
        do{
            printf("\nDigite um numero inteiro para a posicao %d: ", i);
            scanf(" %d", &vet[i]);
        }while(vet[i] < 0);
        if (vet[i]%2 == 0) {
            tamPar++;
        } else {
            tamImpar++;
        }
    }

    int vetPar[tamPar];
    int vetImpar[tamImpar];

    for(i = 0; i < tamVet; i++){
        if(vet[i]%2 == 0){
            vetPar[ip] = vet[i];
            ip++;
        } else {
            vetImpar[ii] = vet[i];
            ii++;
        }
    }

    printf("Pares:");
    for(ip = 0; ip < tamPar; ip++){
        printf("\nVetor par[%d] = %d", ip, vetPar[ip]);
    }


    printf("\n\n\n");
    printf("Impares:");
    for(ii = 0; ii < tamImpar; ii++){
        printf("\nVetor impar[%d] = %d", ii, vetImpar[ii]);
    }

    return 0;
}
