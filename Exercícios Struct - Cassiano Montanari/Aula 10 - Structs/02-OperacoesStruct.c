#include <stdio.h>
//Defini��o do registro
struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    //Declara��o de registro
    struct aluno a;

    /*Cada campo (vari�vel) da struct pode
    ser acessado pelo operador '.' (ponto)*/
    a.RA = 1399999;//!Atribui��o
    printf("RA: %d\n", a.RA);//!Impress�o
    scanf("%f", &a.coef);//!Leitura
    scanf(" %[^\n]s", a.nome);//!Leitura string
    printf("Aluno: %s", a.nome);//!Impress�o string
    a.coef = (a.coef*100) + (a.coef/10);//!Express�o

    return 0;
}
