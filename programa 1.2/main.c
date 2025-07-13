#include <stdio.h>

/* Invierte datos
   El programa, al recibir como dato un conjunto de datos de entrada, invierte
   el orden de los mismos cuando los imprime.
   Realizado por: Pura Acosta
*/

int main(void)
{
    int A, B, C, D;
    printf("ingrese cuatro datis de tipo entero: ");
    scanf("%d %d %d %d" , &A, &B, &C, &D);

    printf("\n Los datos en orden inverso son %d %d %d %d\n", D, C, B, A);

   return 0;
}
