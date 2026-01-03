#include "ponto2d.h"
#include <math.h>

Ponto2D ponto2d_criar(double x, double y){
    return (Ponto2D) {x,y};
}

double ponto2d_distancia(Ponto2D A, Ponto2D B){
    return hypot(A.x - B.x, A.y - B.y);
}
