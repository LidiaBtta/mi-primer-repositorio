 /*La langosta ahumada es una empresa dedicada a ofreccer banquetes, sus tarifas son las siguientes: 
el costo del platillo por persona es de $95, si el numero de personas es mayor a 200 pero menor o igual a 300, el costo es 
de $85, si el numero de personas es mayor a 300, el costo es de $75*/


#include <stdio.h>
int main (void){
    
    int  cantidad, total;
        printf("\t LA LANGOSTA AHUMADA\n");
        printf("$95- 1 a 200 personas\n");
        printf("$85- 201 a 300 personas\n");
        printf("$75- de 301 personas en adelante\n");
       
        printf("ingrese la cantidad de personas:  ");
        scanf("%d",&cantidad);
        
          if(cantidad>=1 && cantidad<=200){
                total=cantidad *95;
                printf("el costo es de: %d", total);
             }
             else 
                if(cantidad>200 && cantidad<=300){
                     total=cantidad *85;
                     printf("el costo es de: %d", total);
                }
                else
                    if(cantidad>300){
                       total=cantidad *75;
                       printf("el costo es de: %d", total);
                       
                }
              
          
               
    
        

return 0;



}