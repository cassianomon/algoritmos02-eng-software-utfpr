#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

ll fat[16];

void fatorial(){
    fat[0] = fat[1] = 1;
    int i;

    for (i = 2; i < 16; i++) {
        fat[i] = i * fat[i - 1];
    }
}

ll obterFatorial(long n){
    return fat[n];
}

int main(){
    long tamanho;
    long b;
    char palavra[16];

    fatorial();

    while(1){
        scanf(" %[^\n]s", palavra);

        if (strcmp(palavra, "0") == 0){
            return 0;
        }

        tamanho = strlen(palavra);

        b = obterFatorial(tamanho);
        printf("%ld\n", b);
    }

    return 0;
}
