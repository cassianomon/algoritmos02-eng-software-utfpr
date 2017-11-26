#include <stdio.h>

int mult(int n, int y){
    if (n == 0) return 0;
    return y + mult(n - 1, y);
}

int main(void){
    int n, y;

    scanf("%d %d", &n, &y);

    mult(n, y);

    printf("%d", mult(n, y));

}