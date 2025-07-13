#include <stdio.h>
#include <stdlib.h>


/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hectáreas.
ECA: variable de tipo real. */
int main(void)
{
    float ECA;

    printf("Ingrese la extensión de la estancia (en acres): ");
    scanf("%f", &ECA);

    ECA = ECA * 4047 / 10000;

    printf("\nExtensión de la estancia en hectáreas: %5.2f", ECA);

    return 0;
}
