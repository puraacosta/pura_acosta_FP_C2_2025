#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/* Aplicación de operadores. */

int main(void)
{
    int i = 5, j = 7, k = 3, m1;
    float x = 2.5, z = 1.8, t;

    m1 = ((j % k) / 2) + 1;  // j % k = 7 % 3 = 1, luego 1/2=0 (entero), +1 =1
    m1 += i;                 // m1 = 1 + 5 = 6
    m1 %= --i;               // --i decrementa i a 4, m1 = 6 % 4 = 2

    printf("\nEl valor de m1 es: %d", m1);

    t = ((float)(j % k) / 2);  // j % k = 1, 1/2 = 0.5 como float
    t++;                       // t = 1.5

    x *= ++z;                  // ++z = 2.8, x = 2.5 * 2.8 = 7.0

    t -= (x += ++i);           // ++i = 5, x = 7.0 + 5 = 12.0, t = 1.5 - 12.0 = -10.5

    printf("\nEl valor de t es: %.2f\n", t);

    return 0;
}
