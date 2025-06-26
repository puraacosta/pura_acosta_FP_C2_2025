#include <stdio.h>

/* Medidas.
El programa, al recibir como datos la longitud y el peso de un objeto
expresados en pies y libras, calcula los datos de este objeto pero en
metros y kilogramos, respectivamente. */

int main(void)
{
    float PIE, LIB, MET, KIL;

    printf("Ingrese los datos del objeto (longitud en pies y peso en libras): ");
    scanf("%f %f", &PIE, &LIB);

    MET = PIE * 0.09290;

    KIL = LIB * 0.45359;

    printf("\ndatos del objeto\nlongitud: %5.2f metros \ tpeso: %2f kilogramos", MET , KIL);

    return 0;


