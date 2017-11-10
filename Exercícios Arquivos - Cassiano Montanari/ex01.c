#include <stdio.h>

typedef struct{
    int ra;
    char nome[80];
}alunos;

int main(void){
    int tamanho, i;
    alunos *vetor;

    printf("Informe o tamanho: ");
    scanf("%d",&tamanho);

    vetor = (alunos*) malloc(tamanho*sizeof(alunos));

    for(i = 0; i < tamanho; i++) {
        printf("Nome %d: ",i);
        fflush(stdin);

        scanf("%50[^\n]s", vetor[i].nome);
        printf("RA %d: ",i);
        scanf("%d", &vetor[i].ra);
    }

    FILE *arquivo_bin;

    arquivo_bin = fopen("alunos.dat","wb");

    if(arquivo_bin==NULL) {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
        return 0;
    }

    fwrite(&tamanho,sizeof(int),1,arquivo_bin);

    fwrite(vetor,sizeof(alunos),tamanho,arquivo_bin);

    fclose(arquivo_bin);

    return 0;
}
