#include <stdio.h>
#include "ponto2d.h"

int main(void){

    Ponto2D A = ponto2d_criar(3.0, 4.0);
    Ponto2D B = ponto2d_criar(7.0, 7.0);
    Ponto2D M = ponto2d_ponto_medio(A,B);

    printf("Distância entre A e B: %.1f.\n", ponto2d_distancia(A,B));
    printf("Ponto médio entre A e B: (%.1f, %.1f).\n", M.x, M.y);

    return 0;
}
