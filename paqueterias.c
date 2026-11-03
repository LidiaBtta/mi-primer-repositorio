
#include <stdio.h>

int main(void) {
    int costo = 0, peso, servicio, destino;
    float costot;

    printf("\tPeso del paquete\n");
    printf("1 kg [1]\n");
    printf("Mas de 1 kg hasta 5 kg [2]\n");
    printf("Mas de 5 kg hasta 10 kg [3]\n");
    printf("Mas de 10 kg [4]\n");
    printf("Ingrese el peso de su paquete: ");
    scanf("%d", &peso);

    printf("\nTipo de destino\n");
    printf("Local [a], Nacional [b], Internacional [c]\n");
    printf("Ingrese el destino: ");
    scanf(" %c", (char *)&destino);

    printf("\nTipo de servicio [1] o [2]\n");
    printf("Ingrese el tipo de servicio: ");
    scanf("%d", &servicio);

    if (peso == 1)
        costo = 80;
    else if (peso <= 5)
        costo = 120;
    else if (peso <= 10)
        costo = 200;
    else if (peso > 10)
        costo = 300;
    else {
        printf("Peso no valido");
        return 1;
    }

    switch (destino) {
        case 'a':
            break;
        case 'b':
            costo = costo + costo * 0.25;
            break;
        case 'c':
            costo = costo + costo * 0.60;
            break;
        default:
            printf("Destino no valido");
            return 1;
    }

    if (servicio == 1) {
        costot = costo;
        printf("No se agrega cargo adicional.\n");
    }
    else if (servicio == 2) {
        costot = costo + costo * 0.30;
        printf("Se agrega un cargo adicional del 30%%.\n");
    }
    else {
        printf("Servicio no valido");
        return 1;
    }

    printf("Costo total: %.2f\n", costot);

    return 0;
}
