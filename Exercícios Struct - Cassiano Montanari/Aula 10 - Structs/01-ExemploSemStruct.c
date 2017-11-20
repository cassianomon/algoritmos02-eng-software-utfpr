#include <stdio.h>

int main(void)
{
    int qtd = 0, i;
    char resp = 'n';

    int contatos = 100;
    int letras = 100, digitos = 10;

    char Nome[contatos][letras + 1];
    char RA[contatos][digitos + 1];
    int dia[contatos], mes[contatos], ano[contatos];

    do
    {
        printf("Deseja inserir um novo contato (s/n)?: ");
        scanf(" %c", &resp);
        if(qtd == contatos)
        {
            printf("Lista cheia.\n");
            resp = 'n';
        }
        else if(resp == 's')
        {
            printf("Informe o nome: ");
            scanf(" %[^\n]s", Nome[qtd]);
            printf("Informe o RA: ");
            scanf(" %s", RA[qtd]);
            printf("Informe o dia de nascimento: ");
            scanf("%d", &dia[qtd]);
            printf("Informe o mes de nascimento: ");
            scanf("%d", &mes[qtd]);
            printf("Informe o ano de nascimento: ");
            scanf("%d", &ano[qtd]);
            qtd++;
        }

    }while(resp == 's');

    for(i = 0; i < qtd; i++)
    {
        printf("Nome[%d] = %s\n", i, Nome[i]);
        printf("RA[%d] = %s\n", i, RA[i]);
        printf("Nascimento: %d/%d/%d \n\n", dia[i], mes[i], ano[i]);
    }

    return 0;
}
