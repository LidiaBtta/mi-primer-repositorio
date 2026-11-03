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
                
             }
             else 
                if(cantidad>200 && cantidad<=300){
                     total=cantidad *85;
                    
                }
                else
                    if(cantidad>300){
                       total=cantidad *75;
                    
              
            }
            printf("el costo es de: %d", total);
return 0;
} 
              