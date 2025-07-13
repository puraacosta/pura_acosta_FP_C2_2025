#include <stdio.h>

/* Programa que calcula el resultado de la serie:
   (1/1) * (1/2) * (1/3) * ... * (1/N) */

int main(void)
{
int N, I;
double PROD = 1.0;

printf("Ingrese el valor de N (n�mero de t�rminos): ");
scanf("%d", &N);

for (I = 1; I <= N; I++)
    {
    PROD *= 1.0 / I;
    }

printf("\nEl resultado de la serie con %d t�rminos es: %.10f\n", N, PROD);

return 0;
}
