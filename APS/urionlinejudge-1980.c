#include <stdio.h>
#include <string.h>
#include <ctype.h>

double fatorial(long a){
    long result;

    for (result = 1; a > 1; a--) {
        result = result * a;
    }

    return result;
}

int main(){

    long tamanho;
    long b;
    char palavra[15];
    int stop = 0;

    while(stop == 0){
        scanf(" %s", palavra);

        if (isalpha(palavra) == "0"){
            stop = 1;
            return 0;
        }

        tamanho = strlen(palavra);

        b = fatorial(tamanho);
        printf("%ld\n", b);
    }

    return 0;
}
