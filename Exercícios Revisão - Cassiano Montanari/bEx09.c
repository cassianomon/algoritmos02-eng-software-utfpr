#include <stdio.h>

    // Universidade T�cnol�gica Federal do Paran� - Algoritmos 02
    // Professor: Muriel

    // Lista 01 - Revis�o de Conte�dos
    // Parte C � Estrutura de repeti��o
    // Exerc�cio 09

    // Autor: Cassiano Guareschi Montanari
    // RA: 1343386

int main(void){

    int cont = 0, i = 0, soma = 0;

    do{
        printf("\nInforme um numero: ");
        scanf(" %d", &cont);
        i++;
        if(i%2 == 0){
            soma = soma+i;
            i = i+1;
        } else {
            i = i+1;
        }
    }while(i < cont);

    printf("\n%d", cont);
    return 0;
}
