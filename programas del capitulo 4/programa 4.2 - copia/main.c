#include <stdio.h>

/* el programa calcula el cubo de los 10 primeros numeros naturales
con la ayuda de una funcion hecho por pura acosta

*/

int cubo (int n)
{
    return n * n * n;

}
int main(void)
{

     for (int i = 1; i <= 10; i++)
        printf("El cubo de %d es: %d\n", i, cubo(i));

    return 0;

}
