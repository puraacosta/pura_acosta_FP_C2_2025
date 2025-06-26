#include <stdio.h>

/* Aplicación de operadores. */
int main(void)
{
    int i, j, k = 2, l = 7;

    i = 9 + 3 * 2;
    j = 8 % 6 + 4 * 2;
    i %= j;

    printf("\nEl valor de i es: %d", i);

    ++l;

    // Separé la expresión inválida para evitar errores
    // l++ * 2 se calcula primero y luego se resta de k
    k = k - (l++ * 2);

 printf("\nEl valor de k es: %d", k);

    // Reescribí para que la operación sea válida
    // Nota: 5.5 es float, pero i es int, se trunca a 5
    i = (int)5.5 - (3 * 2 % 4); // i = 5 - (6 % 4) = 5 - 2 = 3

    k = 3;
    --k;
    j = (i * 2 - k); // j = (3 * 2 - 2) = 6 - 2 = 4

    printf("\nEl valor de j es: %d", j);

    return 0;
}
