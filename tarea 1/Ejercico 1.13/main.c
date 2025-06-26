#include <stdio.h>

/* Aplicación de operadores. */

int main(void)
{
    int i = 5, j = 4, k, l, m;

    // k = !i * 3 + --j * 2 - 3;
    // !i = 0 (porque i = 5), --j = 3
    // k = 0 * 3 + 3 * 2 - 3 = 0 + 6 - 3 = 3
    k = (!i) * 3 + --j * 2 - 3;
    printf("\nEl valor de k es: %d", k);

    // l = ! (!i ^ 1 && 0) && 1;
    // ^ no es operador lógico, usaremos != como lógica probable
    // Simplificamos: !(!i != 1 && 0) && 1
    l = !( (!i != 1) && 0 ) && 1;
    printf("\nEl valor de l es: %d", l);

    // m = (k = (!(12 > 10)), j = (10 != 0) && k, (!(k != j)));
    // Se separa para legibilidad
    k = !(12 > 10); // k = 0
    j = (10 != 0) && k; // j = 1 && 0 = 0
    m = !(k != j); // m = !(0 != 0) = !0 = 1
    printf("\nEl valor de m es: %d", m);

    return 0;
}

