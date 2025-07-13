#include <stdio.h>

/* Programa que calcula la productoria (factorial) de los N primeros n�meros naturales */

int main(void)
{
int N, I;
unsigned long long PROD = 1;  // Para soportar n�meros grandes

printf("Ingrese el valor de N: ");
scanf("%d", &N);

for (I = 1; I <= N; I++)
    {
        PROD *= I;
    }

printf("\nLa productoria de los primeros %d n�meros naturales es: %llu\n", N, PROD);

return 0;
}
