#include <stdio.h>
#include <stdlib.h>


int main(void){
    int valor = 0;
    int *ponteiro;


    valor = 20;

    ponteiro = &valor;

    printf("\nValor da variavel: %d", valor);
    printf("\nEndereco da variavel: %d", &valor);
    printf("\nValor no ponteiro: %d", ponteiro);
    printf("\nValor armazenado no endereco ponteiro: %d", *ponteiro);
    printf("\n\n");
}
