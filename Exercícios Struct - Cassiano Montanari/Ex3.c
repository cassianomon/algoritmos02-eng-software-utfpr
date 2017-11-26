#include <stdio.h>
#include <stdlib.h>

struct dados{
    int RA;
    char nome[20];
    int p1;
    int p2;
    int p3;
};

struct dados* alocar(int quantidade){
    struct dados* vet;

    vet = (struct dados*) calloc(quantidade, sizeof(struct dados));

    return vet;
}

void imprimir(struct dados* vet, int quantidade){

    int i, q = 0, p, p2, p3, k1, k2, k3, k = 0;
    int aux, mg, auq, j = 0;

    for (i = 0; i < quantidade; i++){
        p = vet[i].p1;
        aux = vet[q].p1;
        if (p > aux){
            q++;
        }
    }

   printf("O aluno com maior nota na prova 1: %s\n", vet[q].nome);

    for (i = 0; i < quantidade; i++) {
        p = vet[i].p1;
        p2 = vet[i].p2;
        p3 = vet[i].p3;
        k1 = vet[j].p1;
        k2 = vet[j].p2;
        k3 = vet[j].p3;
        mg = (p + p2 + p3) / 3;
        auq = (k1 + k2 + k3) / 3;
        if (mg > auq){
            j++;
        } else{
            k = k + i;
        }
    }
    printf("O aluno com maior media geral: %s\n", vet[j].nome);
    printf("O aluno com menor media geral: %s\n", vet[k].nome);

    printf("Alunos aprovados: \n");

    for (i = 0; i < quantidade; i++){
        p = vet[i].p1;
        p2 = vet[i].p2;
        p3 = vet[i].p3;
        mg = (p + p2 + p3) / 3;
        if (mg > 6){
            printf("%s\n", vet[i].nome);
        }
    }
}

void preencher(struct dados* vet, int quantidade){

    int i;

    for (i = 0; i < quantidade ; i++) {
        printf("Informe o RA do aluno: \n");
        scanf("%d", &vet[i].RA);
        printf("Informe o nome do aluno: \n");
        scanf("%s", vet[i].nome);
        printf("Informe a nota da prova 1 do aluno: \n");
        scanf("%d", &vet[i].p1);
        printf("Informe a nota da prova 2 do aluno: \n");
        scanf("%d", &vet[i].p2);
        printf("Informe a nota da prova 3 do aluno: \n");
        scanf("%d", &vet[i].p3);
    }
}

int main(void){
    int quantidade;
    struct DADOS *lista;

    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &quantidade);

    lista = alocar(quantidade);

    preencher(lista, quantidade);

    imprimir(lista, quantidade);

}
