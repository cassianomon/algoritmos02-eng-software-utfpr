#include <stdio.h>
#include <string.h>

int fatorial(int a){
    int result;

    for (result = 1; a > 1; a--) {
        result = result * a;
    }

    return result;
}

void lerPalavra(){
    int tamanho, b;
    char palavra[15];

    scanf(" %s", palavra);

    tamanho = strlen(palavra);

    if (tamanho != 0) {
        b = fatorial(tamanho);
        printf("Retorno: %d\n", b);

        lerPalavra();
    } else {
        return;
    }
}

int main(){
    lerPalavra();
    return 0;
}
