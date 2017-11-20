#include <stdio.h>

typedef struct{
    int idade;
    char nome[80];
}dados;

int main(void)
{
    int tam;
    int i;
    dados *vetor;

    //criar ponteiro de arquivo
    FILE *arquivo_bin;

    //abrir arquivo binário para ler
    arquivo_bin = fopen("dados.dat","rb");

    //verificar se arquivo existe
    if(arquivo_bin==NULL)
    {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
        return 0;
    }

    //ler primeira linha do arquivo, o tamanho
    fread(&tam, sizeof(int), 1, arquivo_bin);

    //alocar dinamicamente o vetor para receber os dados
    vetor = (dados*)malloc(tam*sizeof(dados));

    //ler o arquivo para o vetor
    fread(vetor,sizeof(dados),tam,arquivo_bin);

    //fechar arquivo
    fclose(arquivo_bin);

    //printar o vetor para verificar se está correto
    for(i = 0; i < tam; i++)
    {
        printf("%s %d\n", vetor[i].nome, vetor[i].idade);
    }

    return 0;
}

