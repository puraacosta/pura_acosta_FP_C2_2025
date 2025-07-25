#include <stdio.h>

/* Asistentes.
   El programa, al recibir como datos la matr�cula, la carrera, el semestre
   y el promedio de un alumno de una universidad privada, determina si
   �ste puede ser asistente de su carrera.
*/

int main(void)
{
    int MAT, CAR, SEM;
    float PRO;

    printf("Ingrese matr�cula: ");
    scanf("%d", &MAT);

    printf("Ingrese carrera (1-Industrial 2-Telem�tica 3-Computaci�n 4-Mec�nica): ");
    scanf("%d", &CAR);

    printf("Ingrese semestre: ");
    scanf("%d", &SEM);

    printf("Ingrese promedio: ");
    scanf("%f", &PRO);

    switch(CAR)
    {
        case 1:  // Industrial
            if (SEM >= 6 && PRO >= 8.5)
                printf("\n%d %d %5.2f - Puede ser asistente", MAT, CAR, PRO);
            else
                printf("\nNo cumple los requisitos para ser asistente.");
            break;

        case 2:  // Telem�tica
            if (SEM >= 5 && PRO >= 9.0)
                printf("\n%d %d %5.2f - Puede ser asistente", MAT, CAR, PRO);
            else
                printf("\nNo cumple los requisitos para ser asistente.");
            break;

        case 3:  // Computaci�n
            if (SEM >= 6 && PRO >= 8.8)
                printf("\n%d %d %5.2f - Puede ser asistente", MAT, CAR, PRO);
            else
                printf("\nNo cumple los requisitos para ser asistente.");
            break;

        case 4:  // MECANICA
            if (SEM >= 7 && PRO >= 9.0)
                printf("\n%d %d %5.2f - Puede ser asistente", MAT, CAR, PRO);
            else
                printf("\nNo cumple los requisitos para ser asistente.");
            break;

        default:
            printf("\nError en la carrera.");
            break;
    }

    return 0;
}

