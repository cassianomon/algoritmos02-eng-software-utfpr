#include <stdio.h>


void binario(int n){
    if (n == 1){
        printf("1");
    } else{
        binario(n / 2);
        printf("%d", n % 2);
    }
}

int main(void){
    int n;

    scanf("%d", &n);
    binario(n);
}