#include <stdio.h>
#include <stdlib.h>


/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hect�reas.
ECA: variable de tipo real. */
int main(void)
{
    float ECA;

    printf("Ingrese la extensi�n de la estancia (en acres): ");
    scanf("%f", &ECA);

    ECA = ECA * 4047 / 10000;

    printf("\nExtensi�n de la estancia en hect�reas: %5.2f", ECA);

    return 0;
}
