/*una compañera de viajes cuenta con 3 tipos de autobuses a,b y c, cada uno tiene un precio por km recorrido
 por persona,los costos respectivos son $2,$2.50 y $3 pesos. Se requiere determinar el costo total y por persona
  del viaje,considerando que cuando este se presupuesta  debe de ser minimo 20 personas, de lo contrario el cobro se realiza
 con base a este numero limite*/



 #include <stdio.h>
int main (void){
    char ta;
    float np,costo,cp,kmr;
    
    printf("autobus [a]- $2*km por persona\n");
    printf("autobus [b]- $2.50*km por persona\n");
    printf("autobus [c]- $3*km por persona\n");
   
   
    printf("ingrese el tipo de autobus que desea tomar:  ");
    scanf("%c",&ta);
    printf("ingrese el numero de personas:  ");
    scanf("%f",&np);
    printf("ingrese el numero de km a recorridos:  ");
    scanf("%f",&kmr);

    switch(ta){
        case 'a':
         printf("\telegiste el autobus a\n");
             if(np>=20){
                printf("\tel costo del viaje por persona es de:$ %.1f\n", 2.0*kmr);
          }  
            else{
                if(np<20){
                    costo=20*2*kmr;
                    printf("\tel costo del viaje : $%.2f\n", costo);
                    cp=costo/np;
                    printf("el costo del viaje por persona es de: $%.2f\n", cp);
                }
            }
        break;
   

        case 'b':
            printf("\telegiste el autobus b\n");
                if(np>=20){
                    printf("\tel costo del viaje por persona es de:$ %.1f\n", 2.5*kmr);
          }  
            else{
                
                    costo=20*2.5*kmr;
                    printf("\tel costo del viaje : $%.2f\n", costo);
                    cp=costo/np;
                    printf("el costo del viaje por persona es de: $%.2f\n", cp);
                
            }   
        break;
        case 'c':
            printf("\t elegiste el autobus c\n");
             if(np>=20){
                printf("\tel costo del viaje por persona es de:$ %.1f\n", 3.0*kmr);
          }  
            else{
                
                    costo=20*3*kmr;
                    printf("\tel costo del viaje : $%.2f\n", costo);
                    cp=costo/np;
                    printf("el costo del viaje por persona es de: $%.2f\n", cp);
                
            }
        break;

        }



      return 0;
        }
    