#include <stdio.h>

/* Ventas descendentes.
   El programa, al recibir como datos tres valores que representan las ventas
   de los vendedores de una tienda de discos, escribe las ventas en
   orden descendente.
*/

int main(void)
{
    float P, S, R, temp;

    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);

    // Ordenar los valores de mayor a menor usando intercambio (bubble simple)
    if (P < S) { temp = P; P = S; S = temp; }
    if (P < R) { temp = P; P = R; R = temp; }
    if (S < R) { temp = S; S = R; R = temp; }

    printf("\n\nEl orden descendente es: %8.2f %8.2f %8.2f", P, S, R);

    return 0;
}

