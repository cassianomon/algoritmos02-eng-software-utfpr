#include <stdio.h>

void desloca_esquerda(char* string)
{
    int i;
    for(i = 0; string[i] != '\0'; i++)
    {
        string[i] = string[i] - 3;
    }
}

void desloca_direita(char* string)
{
    int i;
    for(i = 0; string[i] != '\0'; i++)
    {
        string[i] = string[i] + 3;
    }
}

int main(void)
{
    char palavra[26];

    printf("Digite uma palavra: ");
    scanf(" %s", palavra);

    desloca_esquerda(palavra);
    printf("\n\nPalavra criptografada: %s\n\n", palavra);

    desloca_direita(palavra);
    printf("Palavra descriptografada: %s\n\n", palavra);

    return 0;
}
