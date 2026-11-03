#include <stdio.h>
int main(void){
    int m,mi;
    printf("ingresar su edad:  ");
    scanf("%d",&m);
    printf("ingrese la edad minima:  ");
    scanf("%d",&mi);
        if(m>=mi){
            printf("puedes ingresar");
        }
        else{
            printf("no puedes ingresar");
        }
return 0;
}