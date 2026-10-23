/*la asociacion de vinocultores tiene como politica fijar un precio inial al kilo de uva, la cual se clasifica en tipos a y b
y ademas en tamaños 1 y 2,cuando se realiza la venta del producto esta es de un solo tipo y tamaño, se requiere determinar 
cuanto recibira un productor por la uva que entrega en un embarque considerando lo siguiente: si es de tipo a se le carga
2 centavos al precio inicial, cuando es de tamaño 1 y 30 centavos si es de tamaño 2. si es de tipo b se rebaja 30 centavos 
cuando es de tamaño  1 y 50 centavos cuando es de tamaño 2. realice un programa para determinar la ganancia obtenida por venta */

#include <stdio.h>
int main(void){
    float t,pkg,kg,ganancia;
    char tu;
        printf("tipo de uva: [a] o [b]\n");
        printf("tamaño:[1] o [2]\n");
        
        printf("seleccione el tipo de uva:  ");
        scanf("%c",&tu);
       
        printf("seleccione el tamaño de la uva:  ");
        scanf("%f",&t);
       
        printf("ingrese el precio inicial:  ");
        scanf("%f",&pkg);
        
        printf("ingrese la cantidad de kilos:  ");
        scanf("%f",&kg);
        
        switch(tu){
            case 'a':
                if(t==1){
                    ganancia=(pkg+0.02)*kg;
                    printf("la ganancia obtenida es de: %.2f\n",ganancia);
                }else if(t==2){
                    ganancia=(pkg+0.30)*kg;
                    printf("la ganancia obtenida es de: %.2f\n",ganancia);
                }
                break;
            case 'b':
                if(t==1){
                    ganancia=(pkg-0.30)*kg;
                    printf("la ganancia obtenida es de: %.2f\n",ganancia);
                }else if(t==2){
                    ganancia=(pkg-0.50)*kg;
                    printf("la ganancia obtenida es de: %.2f\n",ganancia);
                }
                break;
            


        default:
            printf("opcion no valida\n");
        

            }

return 0;
  }  