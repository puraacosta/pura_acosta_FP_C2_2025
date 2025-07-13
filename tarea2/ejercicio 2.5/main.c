#include <stdio.h>
#include <math.h>

/* Función matemática.
   El programa obtiene el resultado de una función.
   OP y T: variables de tipo entero.
   RES: variable de tipo real.
*/

int main(void)
{
    int OP, T;
    float RES;

    printf("Ingrese la opción del cálculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    switch(OP)
    {
        case 1:
            RES = T / 5.0;  //usamos 5.0 para asegurar el resultado decimal
            break;

        case 2:
            RES = pow(T, T);
            break;

        case 3:
        case 4:
            RES = 6 * T / 2.0;  // Usamos 2.0 para el resultado decimal
            break;

        default:
            RES = 1;
            break;
    }

    printf("\nResultado: %7.2f", RES);

    return 0;
}

