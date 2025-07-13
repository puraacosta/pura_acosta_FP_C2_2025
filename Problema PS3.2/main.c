#include <stdio.h>

/* Programa que calcula el resultado de la serie: 1 + 1/2 + 1/3 + ... + 1/N */

int main(void)
{
 int N, I;
 float SUM = 0.0;

 printf("Ingrese el valor de N (número de términos): ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
    SUM += 1.0 / I;
    }

 printf("\nEl resultado de la serie con %d términos es: %.4f\n", N, SUM);

    return 0;
}
