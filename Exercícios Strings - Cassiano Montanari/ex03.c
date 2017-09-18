#include <stdio.h>
#include <string.h>
int main(void){

    int tamanho = 100;
    char nome[tamanho];
    char chA = 'a';
    char chO = 'o';
    int i = 0;
    int cont = 0;


    do{
        printf("\nDigite um nome: ");
        scanf(" %s", nome);
        if (nome[0] == chA){
            printf("\n%s", nome);
        } else {
            for(i = 0; nome[i] != '\0'; i++){
                if(nome[i] == chO){
                    cont++;
                }
            }
            printf("\nA letra o aparece %d vezes", cont);
        }
    } while (nome != "0");

    return 0;
}
