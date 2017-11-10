#include <stdio.h>

struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    struct aluno a = {"Muriel", 1399999, 0.896};
    printf("A: %s - %d - %f\n", a.nome, a.RA, a.coef);

    //!É possivel atribuir diretamente uma struct em outra.
    //!Somente se as estruturas forem do mesmo tipo.
    //!Cada valor é copiado para seu respectivo campo.
    struct aluno b;
    b = a;
    printf("B: %s - %d - %f\n", b.nome, b.RA, b.coef);

    return 0;
}
