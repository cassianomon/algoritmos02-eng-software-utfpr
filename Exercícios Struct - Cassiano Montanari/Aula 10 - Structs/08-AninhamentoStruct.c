#include <stdio.h>

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

int main(void)
{
    struct PESSOA p;

    printf("Informe o nome: ");
    scanf(" %[^\n]s", p.Nome);
    printf("Informe o dia de nascimento: ");
    scanf("%d", &p.nasc.dia);
    printf("Informe o mes de nascimento: ");
    scanf("%d", &p.nasc.mes);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &p.nasc.ano);
    printf("Informe a cidade: ");
    scanf(" %[^\n]s", p.ender.Cidade);

    printf("Nome: %s\n", p.Nome);
    printf("Data: %d/%d/%d\n", p.nasc.dia, p.nasc.mes, p.nasc.ano);
    printf("Cidade: %s\n", p.ender.Cidade);

    return 0;
}
