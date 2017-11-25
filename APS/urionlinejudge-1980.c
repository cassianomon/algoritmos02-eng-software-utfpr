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
    ll b;
    char palavra[16];

    fatorial();

    while(scanf(" %s", palavra)){

        if ( *palavra == '0'){
            return 0;
        }

        tamanho = strlen(palavra);

        b = obterFatorial(tamanho);
        printf("%lld\n", b);
    }

    return 0;
}
