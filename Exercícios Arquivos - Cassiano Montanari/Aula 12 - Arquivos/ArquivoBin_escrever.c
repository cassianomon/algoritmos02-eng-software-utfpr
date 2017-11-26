#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int idade;
    char nome[80];
}dados;

int main(void)
{
    int tam, i;
    dados *vetor;

    printf("Informe a quantidade: ");
    scanf("%d",&tam);

    //alocar vetor dinamicamente
    vetor = (dados*) malloc(tam*sizeof(dados));

    //ler dados do teclado, informados pelo usuário
    for(i = 0; i < tam; i++)
    {
        printf("Nome %d: ",i);
        fflush(stdin);
        scanf("%[^\n]s", vetor[i].nome);
        printf("Idade %d: ",i);
        scanf("%d", &vetor[i].idade);
    }

    //criar ponteiro de arquivo
    FILE *arquivo_bin;

    //abrir arquivo binário para escrever
    arquivo_bin = fopen("dados.dat","wb");

    //verificar se foi alocado e aberto
    if(arquivo_bin==NULL)
    {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
        return 0;
    }

    //escrever o tamanho na primeira linha
    fwrite(&tam,sizeof(int),1,arquivo_bin);

    //escrever no arquivo binário
    fwrite(vetor,sizeof(dados),tam,arquivo_bin);

    //fechar arquivo
    fclose(arquivo_bin);

    return 0;
}
