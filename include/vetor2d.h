#ifndef VETOR2D_H
#define VETOR2D_H

typedef struct {
    double x;
    double y;
} Vetor2D;

/* Operações básicas */
Vetor2D soma_vetores_2d(Vetor2D u, Vetor2D v);
Vetor2D subtrai_vetores_2d(Vetor2D u, Vetor2D v);
Vetor2D multiplica_por_escalar_2d(Vetor2D v, double k);

/* Operações métricas */
double norma_2d(Vetor2D v);
double produto_escalar_2d(Vetor2D u, Vetor2D v);
double angulo_entre_vetores_2d(Vetor2D u, Vetor2D v);

/* Transformações geométricas */
Vetor2D vetor_entre_pontos_2d(Ponto2D A, Ponto2D B);
Vetor2D rotaciona_2d(Vetor2D v, double angulo);
Ponto2D soma_ponto_vetor_2d(Ponto2D P, Vetor2D v);

/* Vetores derivados */
Vetor2D normaliza_2d(Vetor2D v);
Vetor2D perpendicular_2d(Vetor2D v);

#endif
