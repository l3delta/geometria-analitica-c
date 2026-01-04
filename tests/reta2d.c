#include <stdio.h>
#include "reta2d.h"

int main(void){

    Ponto2D A = {3.0, 3.0};
    Ponto2D B = {3.0, 0.0};

    Reta2D r = {A,B};

    printf("Coeficiente angular da reta AB: %.1f.\n", reta2d_coeficiente_angular(r));
    printf("Coeficiente angular da reta AB: %.1f.\n", reta2d_coeficiente_angular(r));
    
    reta2d_imprime_equacao_reduzida(r);
   
    //EquacaoGeral2D e = reta2d_equacao_geral(r);
        
    reta2d_imprime_equacao_geral(r);
    return 0;
}
