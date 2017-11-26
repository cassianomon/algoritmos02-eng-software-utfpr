#include <stdio.h>

int main(){
    int tamanho = 1000;
    int escritorios[tamanho], e, q, i, j, k;

    scanf("%d %d", &e, &q);

    // todos os escritorios recebem 1, não visitados
    for (i = 0; i < tamanho; i++) {
        escritorios[i] = 1;
    }

    // os escritorios que ele esteve na ultima semana recebem 0
    for (i = 0; i < q; i++) {
        scanf("%d", &j);
        escritorios[j-1] = 0;
    }

    for (i = 0; i < e; i++){
        scanf("%d", &k);
        if (escritorios[k-1] == 0){
            printf("0\n");
        } else {
            printf("1\n");
            escritorios[k-1] = 0;
        }
    }

    return 0;
}