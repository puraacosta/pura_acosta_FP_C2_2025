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
            COS = COS * 0.75;  // 25% descu*

}
