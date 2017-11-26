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
    //Declaração de vetor de struct
    Estudante Aluno[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        scanf(" %[^\n]s", Aluno[i].nome);
        scanf("%d", &Aluno[i].RA);
        scanf("%f", &Aluno[i].coef);
    }

    for(i = 0; i < 10; i++)
    {
        printf("Aluno[%d]:\n", i);
        printf("Nome: %s\n", Aluno[i].nome);
        printf("RA: %d\n", Aluno[i].RA);
        printf("Coef: %f\n\n", Aluno[i].coef);
    }

    return 0;
}
