#include <stdio.h>
#include <stdlib.h>

/* volumen y area de un cilindro.
Realizado por: Pura Acosta
*/

int main(void)

{
   float RAD, ALT, VOL, ARE;

printf("ingrese el radio y la altura del clilindro: ");
scanf("%f %f" , &RAD, &ALT);

VOL = 3.1416 * RAD * RAD * ALT;
ARE = 2* 3.1416 * RAD * ALT;

printf("\nvolumen: %.2f/nArea: %.2f\n" , VOL, ARE);

return 0;

}
