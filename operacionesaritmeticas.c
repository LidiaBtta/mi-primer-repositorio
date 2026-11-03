#include <stdio.h>
int main(void){
    int  r,s,m,a,b;
    float d;
    printf("ingresa un numero:  ");
    scanf("%d", &a);
    printf("ingresa otro numero:  ");

    scanf("%d", &b);
    r=a-b;
    s=a+b;
    m=a*b;
    d= (float) a/b;
    printf("El resultado de la suma:  %d",s);
    printf("\nEl resultado de la resta: %d",r);
    printf("\nEl resultado de la multiplicacion: %d",m);
    printf("\nEl resultado de la division: %.2f",d);
    return 0;

}