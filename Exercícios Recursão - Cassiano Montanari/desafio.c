#include <stdio.h>
int k = 0;

int vezes(int n, int d){
    if(n == 0){
        return 0;
    } else{
        if (d == (n % 10)){
            k++;
        }
        n = n / 10;
        return vezes(n, d);
    }
}

int main(void){
    int n, d;

    scanf("%d %d", &n, &d);

    vezes(n, d);

    printf("%d", k);

}