#include <stdio.h>

void Hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n == 1)
    {
        printf("\n Mover disco 1 do pino %c para o pino %c", origem, destino);
        return;
    }
    Hanoi(n-1, origem, auxiliar, destino);
    printf("\n Mover disco %d do pino %c para o pino %c", n, origem, destino);
    Hanoi(n-1, auxiliar, destino, origem);
}

int main(void)
{
    int n;

    printf("Número de discos: ");
    scanf("%d",&n);

    //Informar quantos discos vao mudar de lugar;
    //Informar na ordem: Origem, Destino, Auxiliar
    Hanoi(n, 'A', 'C', 'B');  // Mover n discos do pino A para o C, usando B como auxiliars
    return 0;
}
