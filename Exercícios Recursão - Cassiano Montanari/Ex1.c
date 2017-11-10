#include <stdio.h>

int* alocarVet(int n){
    int *vet = (int*) malloc(n * sizeof(int));
    return vet;
}

int* gravar(int n, int* vet){
    int i;
    for(i = 0; i < n; i++){
        *vet = i;
        vet++;
    }
}

int* imprimir(int n, int* vet){
    int i;
    for(i = 0; i < n; i++){
        printf("vet[%d] = %d\n",i, *vet);
        vet++;
    }
}

int* liberar(int* vet){
    free(vet);
    vet = NULL;

    if (vet == NULL){
        printf("\n\nLiberou\n");
    }
}

int main(void){
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    int *vet = alocarVet(n);

    gravar(n, vet);
    imprimir(n, vet);
    liberar(vet);
}



