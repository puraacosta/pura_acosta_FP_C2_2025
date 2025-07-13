
#include <stdio.h>

/* Superficie del triángulo.
   El programa, al recibir como datos la base y la altura de un triángulo,
   calcula su superficie.
   BAS, ALT y SUP: variables de tipo real.
   Realizado por: Pura Acosta
*/

int main(void)
{
    float BAS, ALT, SUP;

    printf("ingrese la base y la altura del triangulo: ");
    scanf("%f %f" , &BAS, &ALT);

    SUP = BAS * ALT / 2;

    printf("\NLa superficie del trinagulo es: %5.2f\n" , SUP);

    return 0;

}
