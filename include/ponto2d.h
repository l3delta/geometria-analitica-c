#ifndef PONTO2D_H
#define PONTO2D_H

/* Representa um ponto no plano cartesiano ℝ² */
typedef struct {
    double x;
    double y;
} Ponto2D;

Ponto2D ponto2d_criar(double x, double y);
double ponto2d_distancia(Ponto2D A, Ponto2D B);
Ponto2D ponto2d_ponto_medio(Ponto2D A, Ponto2D B);

#endif

