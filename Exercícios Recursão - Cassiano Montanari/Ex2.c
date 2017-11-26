#include <stdio.h>

int inverter(int n){
    if (n != 0){
        printf("%d", n % 10);
        inverter(n / 10);
    }
}

int main(void){
    int n;

    scanf("%d", &n);
    inverter(n);
}
