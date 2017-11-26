#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int valorA = 0;
int valorB = 0;

void soma(){
    printf("\nSoma: %d + %d = %d", valorA, valorB, (valorA + valorB));
}

void subtracao(int* valorA, int* valorB){
    printf("\nSubtracao: %d - %d = %d", *valorA, *valorB, ((*valorA) + (*valorB)));
}

int multiplicacao(){
    int result = 0;

    result = valorA * valorB;

    return result;
}

int divisao(int* valorA, int* valorB){
    int result = 0;

    result = ((*valorA) / (*valorB));

    return result;
}

int resto(int* valorA, int* valorB){
    int result = 0;

    result = ((*valorA) % (*valorB));

    return result;
}

int main(){

    int escolha;

    printf("Digite um valor de 1 a 5: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtracao");
    printf("\n3 - Multiplicacao");
    printf("\n4 - Divisao");
    printf("\n5 - Resto\n");
    printf("Escolha:");
    scanf("%d", &escolha);

    printf("\n\nDigite o primeiro valor: ");
    scanf("%d", &valorA);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &valorB);

    switch (escolha){
        case 1 :
            soma();
        break;

        case 2 :
            subtracao(&valorA, &valorB);
        break;

        case 3 :
            printf("%d x %d = %d", valorA, valorB, multiplicacao());
        break;

        case 4 :
            printf("%d / %d = %d", valorA, valorB, divisao(&valorA, &valorB));
        break;

        case 5 :
            printf("Resto de %d dividido por %d = %d", valorA, valorB, resto(&valorA, &valorB));
        break;

        default :
            printf ("Valor invalido!\n");
    }

    getch();

}
