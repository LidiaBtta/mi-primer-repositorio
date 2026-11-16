#include <stdio.h>

int main(void){
    int np;
    float e,prom,acumulador,i;
    printf("introduce el numero de personas:  ");
    scanf("%d",&np);
    acumulador=0;
    for(int b=0; b==0; i++){
        scanf("%f",&e);
        if(e<=0)
        b=1;
        else 
        acumulador = acumulador+e;
        e=e+1;
    }
    prom=acumulador/np;
    printf("%.1f\n",prom);
    return 0;
}