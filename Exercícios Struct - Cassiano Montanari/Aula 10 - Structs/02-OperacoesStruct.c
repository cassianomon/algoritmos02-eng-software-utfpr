#include <stdio.h>
//Definição do registro
struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    //Declaração de registro
    struct aluno a;

    /*Cada campo (variável) da struct pode
    ser acessado pelo operador '.' (ponto)*/
    a.RA = 1399999;//!Atribuição
    printf("RA: %d\n", a.RA);//!Impressão
    scanf("%f", &a.coef);//!Leitura
    scanf(" %[^\n]s", a.nome);//!Leitura string
    printf("Aluno: %s", a.nome);//!Impressão string
    a.coef = (a.coef*100) + (a.coef/10);//!Expressão

    return 0;
}
