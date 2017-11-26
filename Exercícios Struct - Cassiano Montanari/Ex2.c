#include <stdio.h>

struct Ponto{
    int x, y;
};

int main(void){
    struct Ponto ponto;
    struct Ponto pontoInferior;
    struct Ponto pontoSuperior;
    int cont = 0;
    do {
        cont++;
        if (cont > 1){
            printf("O ponto inferior x e y deve ser menor do que o ponto superior x e y\n");
        }
        printf("Informe o ponto inferior x e y: ");
        printf("\n");
        scanf("%d %d", &pontoInferior.x, &pontoInferior.y);
        printf("Informe o ponto superior x e y: ");
        printf("\n");
        scanf("%d %d", &pontoSuperior.x, &pontoSuperior.y);

    }while ((pontoSuperior.x < pontoInferior.x) || (pontoInferior.y > pontoSuperior.y) || (pontoSuperior.x < pontoInferior.x) && (pontoInferior.y > pontoSuperior.y));


    if ((ponto.x > pontoInferior.x && ponto.x < pontoSuperior.x)  && (ponto.y > pontoInferior.y && ponto.y < pontoSuperior.y)){
        printf("Dentro do Retangulo");
    } else{
        printf("Fora do Retangulo");
    }

}

