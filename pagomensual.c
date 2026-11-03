#include <stdio.h>/*una persona ahorra 15% de su salario semanal, el 20% en pago de productos 
y servicio, el 50% en comidas, el 15% en diversion. ¿cuanto destino en un mes?*/
int main(){
    float s, sm,a,p,c,d;
    printf("introduce el salario semanal:  ");
    scanf("%f",&s);
    sm=s*4;
    a =sm*0.15;
    p=sm*0.20;
    c=sm*0.50;
    d=sm*0.15;
    printf("ahorro: %.2f", a);
    printf("\npago de servicios: %.2f", p);
    printf("\ncomida: %.2f", c);
    printf("\ndiversion: %.2f", d);

return 0;



}