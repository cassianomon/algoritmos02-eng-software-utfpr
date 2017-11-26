#include <stdio.h>
#include <string.h>
int main(void){

    int tamanho = 100;
    char nome[tamanho];
    char ch;
    int i = 0;
    int cont = 0;

    printf("\nDigite um nome: ");
    scanf(" %s", nome);
    printf("\nDigite um caractere: ");
    scanf(" %c", &ch);

    for(i = 0; nome[i] != '\0'; i++){
        if (nome[i] == ch){
            cont++;
        }
    }

    printf("A letra %c aparece %d vezes no nome %s.", ch, cont, nome);

    return 0;
}
