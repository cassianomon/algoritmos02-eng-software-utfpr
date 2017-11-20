#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ENDERECO{
    char Rua[50];
    int Numero;
    char Bairro[50];
    char CEP[50];
    char Cidade[50];
    char Estado[50];
};

struct DATA{
    int dia, mes, ano;
};

struct PESSOA{
    char Nome[50];
    char RG[15];
    char CPF[10];
    struct DATA nasc;
    struct ENDERECO ender;
};

struct PESSOA* alocar_vetor(int quantidade)
{
    struct PESSOA* vet;
    //Alocar de acordo com o Tipo de Dado da struct
    //Structs aninhadas sao alocadas automaticamente
    vet = (struct PESSOA*) calloc(quantidade, sizeof(struct PESSOA));

    return vet;
}

void preencher(struct PESSOA* vetor, int quantidade)
{
    int i;

    for(i = 0; i < quantidade; i++)
    {
        printf("Informacoes do contatinho %d:\n", i);
        printf("  Informe o nome: ");
        scanf(" %[^\n]s", vetor[i].Nome);
        printf("  Informe o RG: ");
        scanf(" %[^\n]s", vetor[i].RG);
        printf("  Informe o CPF: ");
        scanf(" %[^\n]s", vetor[i].CPF);
        printf("  Informe a data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &vetor[i].nasc.dia, &vetor[i].nasc.mes, &vetor[i].nasc.ano);
        printf("  Informe o nome da rua: ");
        scanf(" %[^\n]s", vetor[i].ender.Rua);
        printf("  Informe o numero: ");
        scanf(" %d", &vetor[i].ender.Numero);
        printf("  Informe o bairro: ");
        scanf(" %[^\n]s", vetor[i].ender.Bairro);
        printf("  Informe o nome da cidade: ");
        scanf(" %[^\n]s", vetor[i].ender.Cidade);
        printf("  Informe o nome do estado: ");
        scanf(" %[^\n]s", vetor[i].ender.Estado);
        printf("  Informe o CEP: ");
        scanf(" %[^\n]s", vetor[i].ender.CEP);
        printf("\n\n");
    }
}

void imprimir(struct PESSOA* vetor, int quantidade)
{
    int i;

    for(i = 0; i < quantidade; i++)
    {
        printf("Informacoes do contatinho %d:\n", i);
        printf("  Nome: %s\n", vetor[i].Nome);
        printf("  RG: %s\n", vetor[i].RG);
        printf("  CPF: %s\n", vetor[i].CPF);
        printf("  Data de nascimento: %d/%d/%d\n", vetor[i].nasc.dia, vetor[i].nasc.mes, vetor[i].nasc.ano);
        printf("  Endereco: %s, %d, %s, %s - %s\n", vetor[i].ender.Rua,  vetor[i].ender.Numero, vetor[i].ender.Bairro, vetor[i].ender.Cidade, vetor[i].ender.Estado);
        printf("       CEP: %s.\n", vetor[i].ender.CEP);
        printf("\n\n");
    }
}

struct PESSOA* buscar(struct PESSOA* vetor, int quantidade, char *nome)
{
    int i = 0;

    for(i = 0; i < quantidade; i++)
    {
        if(strcmp(vetor[i].Nome, nome) == 0)//comparando strings
            return &vetor[i];//retornar endereço da struct
    }

    //Retornar NULL se percorreu todos e não encontrou
    return NULL;
}

int main(void)
{
    int tam;
    struct PESSOA *lista;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    //recebendo espaço de memoria alocado pela função
    lista = alocar_vetor(tam);

    //preencher com dados lidos do usuário
    preencher(lista, tam);

    //imprimir os dados da lista toda
    imprimir(lista, tam);

    //realizar busca por um nome específico na lista
    char nome[81];
    struct PESSOA *aux;

    printf("INSIRA O NOME PARA BUSCA: ");
    scanf(" %[^\n]s", nome);

    aux = buscar(lista, tam, nome);

    if(aux == NULL)
        printf("Nao encotrou o dado.\n");
    else
        imprimir(aux, 1);//pode considerar que é um vetor de uma posição

    return 0;
}
