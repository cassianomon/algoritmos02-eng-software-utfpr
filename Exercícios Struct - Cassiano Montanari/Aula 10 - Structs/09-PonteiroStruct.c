#include <stdio.h>
#include <string.h>
struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    struct aluno variavel;
    strcpy(variavel.nome, "Muriel");
    variavel.RA = 1399999;
    variavel.coef = 0.85;
    printf("Variavel: %s - %d - %f\n", variavel.nome, variavel.RA, variavel.coef);

    //Declaração de um ponteiro
    struct aluno *ponteiro;
    //Atribuindo endereço de uma variável de struct aluno
    ponteiro = &variavel;
    //Acesso ao valor de cada campo do endereço
    //(*ponteiro) == variavel
    printf("Ponteiro: %s - %d - %f\n", (*ponteiro).nome, (*ponteiro).RA, (*ponteiro).coef);

    //Acesso ao valor de cada campo do endereço
    //(*ponteiro) == variavel
    (*ponteiro).RA = 9999999;
    (*ponteiro).coef = 0.90;
    strcpy((*ponteiro).nome , "Mazzetto");
    printf("Ponteiro alterado: %s - %d - %f\n", (*ponteiro).nome, (*ponteiro).RA, (*ponteiro).coef);

    //Acesso ao valor de cada campo com ->
    //ponteiro-> == (*ponteiro). == variavel.
    ponteiro->RA = 8888888;
    ponteiro->coef = 0.88;
    strcpy(ponteiro->nome , "Muriel Mazzetto");

    return 0;
}
