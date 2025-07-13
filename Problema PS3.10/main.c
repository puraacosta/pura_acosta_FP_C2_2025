#include <stdio.h>

int main(void) {
float precios[6];
int cantidadVendida[6] = {0,0,0,0,0,0};
float totalVendidos[6] = {0.0,0.0,0.0,0.0,0.0,0.0};
int CLA, CAN;
float totalGeneral = 0.0;

    // Leer precios de las localidades
printf("Ingrese los precios para las 6 localidades:\n");
for(int i=0; i<6; i++) {
    printf("Precio L%d: ", i+1);
    scanf("%f", &precios[i]);
    }

    // Leer ventas
    while (1) {
    printf("Ingrese tipo de localidad (1-6) y cantidad (0 0 para terminar): ");
    scanf("%d %d", &CLA, &CAN);

    if (CLA == 0 && CAN == 0)
        break;

        if (CLA < 1 || CLA > 6 || CAN < 0) {
            printf("Datos invalidos, intente de nuevo.\n");
            continue;
        }

        cantidadVendida[CLA-1] += CAN;
        totalVendidos[CLA-1] += precios[CLA-1] * CAN;
        totalGeneral += precios[CLA-1] * CAN;
    }

    // Mostrar resultados
    printf("\nResumen de ventas:\n");
    for(int i=0; i<6; i++) {
        printf("Localidad L%d: Boletos vendidos = %d, Total recaudado = %.2f\n",
               i+1, cantidadVendida[i], totalVendidos[i]);
    }

    printf("\nTotal general recaudado: %.2f\n", totalGeneral);

    return 0;
}
