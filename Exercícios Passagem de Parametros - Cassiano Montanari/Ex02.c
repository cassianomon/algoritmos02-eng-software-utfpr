#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float valorA = 0;
float valorB = 0;

void soma(){
    printf("%.2f + %.2f = %.2f", valorA, valorB, (valorA + valorB));
}

void subtracao(float* valorA, float* valorB){
    printf("%.2f - %.2f = %.2f", *valorA, *valorB, ((*valorA) + (*valorB)));
}

float multiplicacao(){
    float result = 0;

    result = valorA * valorB;

    return result;
}

float divisao(float* valorA, float* valorB){
    float result = 0;

    result = ((*valorA) / (*valorB));

    return result;
}

int main(){

    printf("Digite o primeiro valor: ");
    scanf("%f", &valorA);

    printf("Digite o segundo valor: ");
    scanf("%f", &valorB);

    //soma();
    //subtracao(&valorA, &valorB);

    //printf("%.2f x %.2f = %.2f", valorA, valorB, multiplicacao());

    printf("%.2f / %.2f = %.2f", divisao(&valorA, &valorB));

}

