#include <stdio.h>
#include <string.h>

int main(void){

    char palavra[100];
    char ag2[4] = "AG2";
    int cont = 0;

    do{
        scanf(" %s", palavra);
        cont++;
    }while(strcmp(palavra, ag2));

    printf("\n\nForam digitadas %d palavras", cont);

    return 0;
}
