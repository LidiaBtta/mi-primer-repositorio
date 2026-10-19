/* 
programa que determina la zona de un numero ingresado por el usuario
*/
#include <stdio.h>
int main (void) {
    int zona;

    printf("ingrese un numero:  ");
    scanf("%d",&zona);

    if(zona>=0 && zona<=20){
        printf("zona 1");
}
else
    if(zona>21 && zona<=40){ 
         printf("zona 2");
    }
else
     if(zona >40){ 
        printf("zona 3");
     }

    
    return 0;
}