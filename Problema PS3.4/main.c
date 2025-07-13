#include <stdio.h>

/* Programa que determina cu�ntos n�meros son positivos, negativos o nulos. */

int main(void)
{
int N, I, NUM;
int POS = 0, NEG = 0, CER = 0;

printf("Ingrese la cantidad de n�meros (N): ");
scanf("%d", &N);

for (I = 1; I <= N; I++)
    {
    printf("Ingrese el n�mero #%d: ", I);
    scanf("%d", &NUM);

    if (NUM > 0)
            POS++;
    else if (NUM < 0)
            NEG++;
    else
            CER++;
    }

    printf("\nCantidad de n�meros positivos: %d", POS);
    printf("\nCantidad de n�meros negativos: %d", NEG);
    printf("\nCantidad de n�meros nulos (ceros): %d\n", CER);

    return 0;
}
