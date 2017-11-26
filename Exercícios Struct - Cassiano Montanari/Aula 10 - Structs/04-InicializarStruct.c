#include <stdio.h>

struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    /*Inicialização com uma lista de valores
    seguindo a ordem dos dados da struct*/
    struct aluno a = {"Muriel", 1399999, 0.896};
    printf("A: %s - %d - %f\n", a.nome, a.RA, a.coef);

    return 0;
}
