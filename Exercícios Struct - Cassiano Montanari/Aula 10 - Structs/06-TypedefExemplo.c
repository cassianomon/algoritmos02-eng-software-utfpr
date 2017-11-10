#include <stdio.h>

//Definindo um novo nome para a struct aluno
typedef struct aluno Estudante;

struct aluno{
    char nome[81];
    int RA;
    float coef;
};

int main(void)
{
    //Estudante é o identificador do tipo de dado de struct aluno
    Estudante a = {"Muriel", 1399999, 0.896};
    printf("A: %s - %d - %f\n", a.nome, a.RA, a.coef);

    return 0;
}
