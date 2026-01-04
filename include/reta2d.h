#ifndef RETA2D_H
#define RETA2D_H

#include "ponto2d.h"

typedef struct {
    Ponto2D A;
    Ponto2D B;
} Reta2D;

typedef struct {
    double A;
    double B;
    double C;
} EquacaoGeral2D;

EquacaoGeral2D reta2d_equacao_geral(Reta2D r);
void reta2d_imprime_equacao_geral(Reta2D r);

double reta2d_coeficiente_angular(Reta2D r);
double reta2d_coeficiente_linear(Reta2D r);
void reta2d_imprime_equacao_reduzida(Reta2D r);

#endif
