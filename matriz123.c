#include <stdio.h>

int main() {

    int i;

    while (scanf("%d", &i) != EOF) {
        int matriz[i][i];
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;

        for (a = 0; a < i; a++) {
            for (b = 0; b < i; b++) {
                matriz[a][b] = 3;
            }
        }
        for (a = 0; a < i; a++) {
            matriz[a][a] = 1;
        }

        d = i - 1;

        for (a = 0, b = d; a < i; a++, b--){
            matriz[a][b] = 2;
        }
        for (a = 0; a < i; a++) {
            for (b = 0; b < i; b++) {
                printf("%d", matriz[a][b]);
            }
            printf("\n");
        }
    }
    return 0;
}