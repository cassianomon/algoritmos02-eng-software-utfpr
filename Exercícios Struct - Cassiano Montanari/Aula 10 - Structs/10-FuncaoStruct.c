#include <stdio.h>

//definição do novo tipo
typedef struct dma data;

//definição da struct
struct dma
{
    int dia, mes, ano;
};

//protótipo das funções
data diferenca(data d1, data d2);

int main(void)
{
    data x, y, w;

    scanf("%d %d %d",&x.dia,&x.mes,&x.ano);
    scanf("%d %d %d",&y.dia,&y.mes,&y.ano);

    printf("\n\nData 1: %d %d %d \n\n",x.dia,x.mes,x.ano);
    printf("Data 2: %d %d %d \n\n",y.dia,y.mes,y.ano);

    w = diferenca(x,y);

    printf("Data 3: %d %d %d \n\n",w.dia,w.mes,w.ano);

    return 1;
}

data diferenca(data d1, data d2)
{
    data aux;
    aux.dia = d1.dia - d2.dia;
    aux.mes = d1.mes - d2.mes;
    aux.ano = d1.ano - d2.ano;
    return aux;
}
