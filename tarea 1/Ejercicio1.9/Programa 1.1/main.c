#include <stdio.h>

/* Promedio de sueldos.
   El programa, al recibir como datos seis sueldos de un empleado, calcula tanto el
   ingreso total como el promedio mensual.
   Realizado por: Pura Acosta
*/


int main(void)
{
    int CLA;
    float SU1, SU2, SU3, SU4, SU5, SU6;
    float ING, PRO;

    printf("Ingrese la clave del empleado y los 6 sueldos:\n");
    scanf("%d %f %f %f %f %f %f", &CLA, &SU1, &SU2, &SU3, &SU4, &SU5, &SU6);

    ING = SU1 + SU2 + SU3 + SU4 + SU5 + SU6;
    PRO = ING / 6.0;

    printf("\nClave del empleado: %d\n", CLA);
    printf("Ingreso total: %.2f\n", ING);
    printf("Promedio mensual: %.2f\n", PRO);
