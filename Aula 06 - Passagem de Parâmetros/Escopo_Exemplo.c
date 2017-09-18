#include <stdio.h>

char nome[26];
int idade;

void le_nome(void)
{
    printf("Insira seu nome: ");
    scanf(" %s", nome);
}

void le_idade(void)
{
    printf("Insira sua idade: ");
    scanf("%d", &idade);
}

void imprime_dados(void)
{
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
}

void engordar(void)
{
    static int peso = 0;
    peso++;
    printf("Peso: %d\n", peso);
}

int main(void)
{
    char opcao;

    do
    {
        le_nome();
        le_idade();
        imprime_dados();
        engordar();

        printf("\nContinuar? s/n: ");
        scanf(" %c", &opcao);
        printf("\n~~~~~~~\n");

    }while(opcao == 's');

    return 0;
}
