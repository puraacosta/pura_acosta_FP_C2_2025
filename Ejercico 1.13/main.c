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

// operacion 2
// i= 0, entonces (!i !=1) = (0 != 1) =1
// 1 && 0 + 0 → 1 1 && 0 = 0
// m= !(k != j) = !! (0 !=0) =0=1

k = !(12 > 10);
j = (10 != 0) && k;
m = !(k != j);

printf("\nEl valor de m es: %d\n" , m);

return 0;

}


