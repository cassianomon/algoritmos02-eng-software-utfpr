#include <stdio.h>

void impares(int n){
    if (n >= 0){
        if (n % 2 == 0){
            n = n - 1;
            printf("%d\n", n);
            impares(n - 2);
        } else{
            printf("%d\n", n);
            impares(n - 2);
        }
    }
}

void pares(int n){
    if(n >= 0){
        if (n % 2 == 0){
        pares(n - 2);
        printf("%d\n", n);

        } else{
        n = n - 1;
        pares(n - 2);
        printf("%d\n", n);

        }
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("pares: \n");
    pares(n);
    printf("impares: \n");
    impares(n);
}