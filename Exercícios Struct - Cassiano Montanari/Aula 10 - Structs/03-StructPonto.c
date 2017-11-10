#include <stdio.h>

struct ponto2D{
    float x, y;
};

struct ponto3D{
    float x, y, z;
};

int main(void)
{
    /*Estruturas diferentes podem ter
    campos com o mesmo nome*/

    struct ponto2D p_2D;
    struct ponto3D p_3D;

    p_2D.x = 5.5;
    p_3D.x = 10.10;

    printf("Ponto 2D: %f\n", p_2D.x);
    printf("Ponto 3D: %f\n", p_3D.x);

    return 0;
}
