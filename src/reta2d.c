#include "reta2d.h"
#include "math.h"
#include "stdio.h"

double reta2d_coeficiente_angular(Reta2D r){
    
    double dx = r.A.x - r.B.x;
    
    if (dx==0.0){
        return NAN;
    }
    
    double dy = r.A.y - r.B.y;

    return dy/dx;    
}

double reta2d_coeficiente_linear(Reta2D r){
    double a = reta2d_coeficiente_angular(r);

    if (a == NAN) {
        return NAN;
    }
    
    return r.A.y - a * r.A.x;
}

void reta2d_imprime_equacao_reduzida(Reta2D r){
    
    double a = reta2d_coeficiente_angular(r); 
    double b = reta2d_coeficiente_linear(r);

    if (b > 0){
        printf("Equação reduzida: y = %.2fx + %.2f.\n", a, b);
    }
    if (b < 0){
        printf("Equação reduzida: y = %.2fx + %.2f.\n", a, -b);
    }
    if (b == 0){
        printf("Equação reduzida: y = %.2fx.\n", a);
    }

    printf("A reta não tem equação reduzida.\n");
}   

EquacaoGeral2D reta2d_equacao_geral(Reta2D r){
    double a, b, c;
    a = r.B.y - r.A.y;
    b = -(r.B.x - r.A.x);
    c = -a * r.A.x - b * r.A.y;
    
    return (EquacaoGeral2D) {a, b, c};
}

void reta2d_imprime_equacao_geral(Reta2D r){
    EquacaoGeral2D e = reta2d_equacao_geral(r);
    printf("Equação Geral: %.1fx + %.1fy + %.1f = 0.\n", e.A, e.B, e.C);
}

