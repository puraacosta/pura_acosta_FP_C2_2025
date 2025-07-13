#include <stdio.h>

/* Estancia.
   El programa, al recibir como dato la superficie de una estancia expresada
   en acres, la convierte a hectáreas.
   Realizado por: Pura Acosta hecho a mano
*/

int main(void)
{
    float ECA;

    printf("Ingrese la extensión de la estancia en acres: ");
    scanf("%f" , &ECA);

    ECA = ECA * 0.4047;

    printf("\nExtension de la estancia en hectareas: %.2f\n" ,ECA);

    return 0;

}
