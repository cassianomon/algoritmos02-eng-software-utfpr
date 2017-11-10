#include <stdio.h>

struct ponto{
    int x;
    int y;
};

int main(void){

    int i;
    int quantidade = 0;

    struct ponto pa = {0,0};
    struct ponto pb = {10, 5};
    struct ponto pc;

    printf("\nInforme a primeira coordenada de um ponto: ");
    scanf("%d", &pc.x);
    printf("Informe a segunda coordenada de um ponto: ");
    scanf("%d", &pc.y);

    if((pc.x > pa.x && pc.x < pb.x) && (pc.y > pa.y && pc.y < pb.y)){
        printf("\nO ponto esta dentro do retangulo.");
    } else {
        printf("\nO ponto esta fora do retangulo.");
    }

    printf("\n\n\n");

    return 0;
}
