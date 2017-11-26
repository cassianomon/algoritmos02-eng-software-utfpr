#include <stdio.h>

int sum(int n){
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main(void){

    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    sum(n);
    printf("%d", sum(n));
    return 0;
}
