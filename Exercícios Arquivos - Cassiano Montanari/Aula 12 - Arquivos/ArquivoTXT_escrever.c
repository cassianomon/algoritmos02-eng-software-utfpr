#include <stdio.h>

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
        //o scanf abaixo diz ao compilador para ler no máximo 79 caracteres e descartar o restante, salvar um caractere para o \0
        //também diz para ler tudo o que for digitado até ser digitado ENTER
        scanf("%79[^\n]s", vetor[i].nome);
        printf("Idade %d: ",i);
        scanf("%d", &vetor[i].idade);
    }

    //criar ponteiro de arquivo
    FILE *arquivo_txt;

    //abrir arquivo de texto para escrever
    arquivo_txt = fopen("dados.txt","w");

    //verificar se foi alocado e aberto
    if(arquivo_txt==NULL)
    {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
        return 0;
    }

    fprintf(arquivo_txt,"%d\n", tam);

    //escrever um dado por vez
    for(i = 0; i < tam; i++)
    {
        fprintf(arquivo_txt,"%s, %d\n", vetor[i].nome, vetor[i].idade);
    }

    //fechar arquivo
    fclose(arquivo_txt);

    return 0;
}
