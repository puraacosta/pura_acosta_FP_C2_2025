#include <stdio.h>

/* Prueba de par�metros por referencia.
   Realizado por: Pura Acosta
*/

void f1(int *r); // Prototipo

int main(void)
{
    int i, K = 4;


    for (i = 1; i <= 3; i++) {

        printf("\n\nValor de K antes de llamar a la funci�n: %d", ++K);

        f1(&K); // Paso por referencia

        printf("\nValor de K despu�s de llamar a la funci�n: %d", K);
    }


    return 0;
}


void f1(int *r)
{
    *r += *r; // Duplica el valor apuntado
}
