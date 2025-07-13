#include <stdio.h>

/* Spa.
   El programa, al recibir como datos el tipo de tratamiento, la edad y el
   número de días de internación de un cliente en un spa, calcula el costo
   total del tratamiento.
*/

int main(void)
{
    int TRA, EDA, DIA;
    float COS;

    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    switch(TRA)
    {
    case 1: COS = DIA * 2800.0; break;
    case 2: COS = DIA * 1950.0; break;
    case 3: COS = DIA * 2500.0; break;
    case 4: COS = DIA * 1150.0; break;
    default: COS = -1.0; break;
    }

if (COS != -1.0)
    {
    if (EDA >= 60)
            COS = COS * 0.75;  // Descuento 25%
else if (EDA <= 25)
            COS = COS * 0.85;  // Descuento 15%

printf("\nClave tratamiento: %d\tDias: %d\tCosto total: %.2f\n", TRA, DIA, COS);
    }
    else
    {
        printf("\nLa clave del tratamiento es incorrecta.\n");  // Aquí estaba el error: faltaba el ;
    }

    return 0;
}

