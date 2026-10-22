#include <stdio.h>
int main (void){
    int pizza;
    printf("\t PIZZAS\n");
    printf("[1]-sencilla\n");
    printf("[2]-mediana\n");
    printf("[3]-familiar\n");
    printf("[4]-jumbo\n");
    printf("ingrese el tipo de pizza que desea:  ");
    scanf("%d",&pizza);

    switch(pizza){
        case 1:
            printf("elegiste la pizza sencilla");
            printf("el costo de la pizza es de $200\n");
            break;
        case 2:
        printf("elegiste una pizza mediana\n");
        printf("el costo de la pizza es de $300\n");
            break;
        case 3:
        printf("elegiste una pizza familiar\n");
        printf("el costo de la pizza es de $400\n");
            break;  
        case 4:
            printf("elegiste una pizza jumbo\n");
            printf("el costo de la pizza es de $500\n");
    }

}