#include <stdio.h>

typedef struct{
    int idade;
    char nome[80];
}dados;

int main(void)
{
    int tam, i;
    dados *vetor;

    //criar ponteiro de arquivo
    FILE *arquivo_txt;

    //abrir arquivo de texto para ler
    arquivo_txt = fopen("dados.txt","r");

    //verificar se arquivo existe
    if(arquivo_txt==NULL)
    {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
        return 0;
    }

    //ler primeira linha, que contem a quantidade de dados presentes no arquivo
    fscanf(arquivo_txt,"%d", &tam);

    //alocar dinamicamente o vetor para receber os dados
    vetor = (dados*)malloc(tam*sizeof(dados));

    for(i = 0; i < tam; i++)
    {
        //o scanf abaixo lerá até encontrar uma virgula, ignorando ela e partindo para o próximo dado a ser lido
        fscanf(arquivo_txt," %[^,],s",vetor[i].nome);
        fscanf(arquivo_txt,"%d",&vetor[i].idade);
    }

    //fechar arquivo
    fclose(arquivo_txt);

    //printar o vetor para verificar se está correto
    for(i = 0; i < tam; i++)
    {
        printf("%s %d\n", vetor[i].nome, vetor[i].idade);
    }

    return 0;
}

