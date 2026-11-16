#include <stdio.h>
int main(void){
    int mes=1, deposito,ahorro=0;
    while(mes<=12){
        printf("deposito del mes:  ");
        scanf("%d",&deposito);
        ahorro+=deposito;
        printf("ahorro: %d\n",ahorro);
        mes++;
          
    }
  
return 0;
}