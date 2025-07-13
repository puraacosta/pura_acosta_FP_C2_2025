#include <stdio.h>
#include <math.h>

int main(void)
{
int N, I;
double SUM = 0.0;
double T;

printf("Ingrese el valor de N: ");
scanf("%d", &N);

for (I = 1; I <= N; I++)
    {
    T = pow(I, I); // Calcula i^i

    if (I % 2 == 1) // impar
            SUM += T;
    else             // par
        SUM -= T;
    }

printf("\nEl resultado de la serie es: %.0lf\n", SUM);

    return 0;
}
