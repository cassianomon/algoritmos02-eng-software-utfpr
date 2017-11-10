#include <stdio.h>

typedef struct aluno Estudante;

struct aluno{
    char nome[81];
    int RA;
    float nota1;
    float nota2;
    float nota3;
};

int main(void){

    int i;
    int qtdAlunos = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    Estudante *matAluno = (Estudante*) malloc(qtdAlunos * sizeof(Estudante));

    alocar(*matAluno, qtdAlunos);

    return 0;
}

int alocar(Aluno, qtdAlunos){
    int i = 0;
    for(i = 0; i < qtdAlunos; i++){
        scanf("Nome Aluno[%d] %[^\n]s", i, Aluno[i].nome);
        scanf("\nRA Aluno[%d]: %d", i, &Aluno[i].RA);
        scanf("\nNota 1: %f", i, &Aluno[i].nota1);
        scanf("\nNota 2: %f", i, &Aluno[i].nota2);
        scanf("\nNota 3: %f", i, &Aluno[i].nota3);
    }

    for(i = 0; i < qtdAlunos; i++){
        printf("Aluno[%d]:\n", i);
        printf("\nNome do aluno: %s", Aluno[i].nome);
        printf("\nRA: %d", Aluno[i].RA);
        printf("\nNota 1: %f", Aluno[i].nota1);
        printf("\nNota 2: %f", Aluno[i].nota2);
        printf("\nNota 3: %f\n\n", Aluno[i].nota3);
    }
}
