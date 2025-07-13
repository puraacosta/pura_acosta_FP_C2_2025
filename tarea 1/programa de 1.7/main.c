#include <stdio.h>

//* Medidas.
   El programa, al recibir como datos la longitud y el peso de un objeto
   expresados en pies y libras, calcula los datos de este objeto pero en
   metros y kilogramos, respectivamente.
   Realizado por: Pura Acosta
*/

int main(void)

    float PIE, LIB, MET, KIL;

    printf(" ingrese los datos del objeto (pies y libras): ");
    scanf("%f %f" , &PIE, &LIB);

    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;

   printf("\nDatos del objeto\n");
    printf("Longitud: %5.2f metros\tPeso: %5.2f kilogramos\n", MET, KIL);

    return 0;
