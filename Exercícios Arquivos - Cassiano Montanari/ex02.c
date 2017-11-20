#include <stdio.h>

typedef struct{
    int ra;
    char nome[80];
}alunos;

int main(void) {
    int tamanho;
    int i;
    alunos *vetor;

    FILE *arquivo_bin;

    arquivo_bin = fopen("alunos.dat","rb");

    if(arquivo_bin==NULL) {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO BIN!\n");
        return 0;
    }

    fread(&tamanho, sizeof(int), 1, arquivo_bin);

    vetor = (alunos*)malloc(tamanho*sizeof(alunos));

    fread(vetor,sizeof(alunos),tamanho,arquivo_bin);

    FILE *arquivo_txt;

    arquivo_txt = fopen("alunos.txt","wb");

    if(arquivo_txt==NULL) {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO TXT!\n");
        return 0;
    }

    fclose(arquivo_bin);

    for(i = 0; i < tamanho; i++) {
        printf("%s %d\n", vetor[i].nome, vetor[i].ra);
    }

    fprintf(arquivo_txt,"Quantidade: %d\n", tamanho);

    for(i = 0; i < tamanho; i++) {
        fprintf(arquivo_txt,"Nome: %s - RA:%d\n", vetor[i].nome, vetor[i].ra);
    }

    fclose(arquivo_txt);

    return 0;
}

