/*un sistema elctrico de medicion de temperatura que proporciona incrementos por 100 milivolts por cada grado centigrado 
-3 volts hasta 1 volt son consideradas frias
1 hasta 4 son consideradas templado 
de 4 a 10 volts calientes*/

#include <stdio.h>
int main(void){
    float v,in;
        printf("ingrese un rango de medicion en volts:  ");
        scanf("%f",&v);
        
        in=v*10;
        printf("la temperatura es: %1.f\n",in);
        
        if(v==-3 && v<1 ){
        printf("la temperatura es fria");
            }
        else if(v>=1 && v<=4){
            printf("la temperatura es templado");
            }
            else{
                printf("la temperatura es caliente");
                }


return 0;
}