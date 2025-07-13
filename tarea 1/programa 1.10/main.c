#include <stdio.h>
#include <math.h>

/* Area del triangulo.
el programa a recibir los tres lados de un triangulo, calcula su area usando la
formula de heron.
realizado por: pura acosta
*/

int main(void)

{
    float LA1, LA2, LA3, AUX, ARE;

    printf("ingrese los  tres lados del triangulo: ");
    scanf("%f %F %F m &LA1, &LA2, &LA3");

    AUX = ( LA1 + LA2 + LA3) / 2;
    ARE = sqrt(AUX * (AUX - LA1) * (AUX - LA2) * (AUX - LA3));

    printf("\n El area del triangulo es: %.2fn", ARE);

    return 0;

}
