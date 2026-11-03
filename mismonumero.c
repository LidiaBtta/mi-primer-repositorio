/*un numero cualquiera que imprima el mismo numero cuando tome valores mayores a 10*/
#include <stdio.h>
int main(void){
    int a;
    printf("ingrese un numero:  \n");
    scanf("%d",&a);
    if(a > 10){
        printf("es correcto: %d", a);
    }
    else{
        printf("es menor que 10");
    }
    return 0;
}