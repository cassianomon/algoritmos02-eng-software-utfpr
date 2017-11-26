#include<stdio.h>

int recursao(int n, int m) {
    if(n == 1) {
        return 1;
    } else {
        return (recursao(n - 1, m) + m - 1) % n + 1;
    }
}

int main() {
    int caso, n, m, i;
    while(scanf("%d", &caso) == 1){
        for(i = 1; i <= caso; i++){
            scanf("%d %d", &n, &m);
            int aux = recursao(n, m);
            printf("Case %d: %d\n", i, aux);
        }
    }
    return 0;
}

