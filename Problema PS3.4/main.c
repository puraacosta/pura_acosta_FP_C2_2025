#include <stdio.h>

/* Programa que determina cuántos números son positivos, negativos o nulos. */

int main(void)
{
int N, I, NUM;
int POS = 0, NEG = 0, CER = 0;

printf("Ingrese la cantidad de números (N): ");
scanf("%d", &N);

for (I = 1; I <= N; I++)
    {
    printf("Ingrese el número #%d: ", I);
    scanf("%d", &NUM);

    if (NUM > 0)
            POS++;
    else if (NUM < 0)
            NEG++;
    else
            CER++;
    }

    printf("\nCantidad de números positivos: %d", POS);
    printf("\nCantidad de números negativos: %d", NEG);
    printf("\nCantidad de números nulos (ceros): %d\n", CER);

    return 0;
}
