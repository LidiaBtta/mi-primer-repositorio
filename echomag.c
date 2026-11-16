#include <stdio.h>

int main(void){
    int np;
    float e,prom,acumulador;
    printf("introduce el numero de personas:  ");
    scanf("%d",&np);
    acumulador=0;
    
    for(int i=0; i<np; i++){
        scanf("%f",&e);
        acumulador = acumulador+e;
    }
    prom=acumulador/np;
    printf("%.1f\n",prom);
    return 0;
}