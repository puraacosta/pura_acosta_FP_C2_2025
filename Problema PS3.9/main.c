#include <stdio.h>

#define MESES 12
#define REGIONES 6

int main(void) {
    // Regiones en orden: 0-NORTE, 1-CENTRO, 2-SUR, 3-GOLFO, 4-PACIFICO, 5-CARIBE
    const char* regiones[REGIONES] = {"NORTE", "CENTRO", "SUR", "GOLFO", "PACIFICO", "CARIBE"};
    float temperaturas[MESES][REGIONES];
    float promedios[REGIONES] = {0};
    int i, j;

    // Lectura de temperaturas
    for (i = 0; i < MESES; i++) {
        printf("Mes %d:\n", i + 1);
        for (j = 0; j < REGIONES; j++) {
            printf("  Temperatura promedio en %s: ", regiones[j]);
            scanf("%f", &temperaturas[i][j]);
        }
    }

    // Calcular promedio anual por región
    for (j = 0; j < REGIONES; j++) {
        float suma = 0;
        for (i = 0; i < MESES; i++) {
            suma += temperaturas[i][j];
        }
        promedios[j] = suma / MESES;
    }

    // Encontrar temperatura máxima y mínima con su región y mes
    float temp_max = temperaturas[0][0];
    float temp_min = temperaturas[0][0];
    int mes_max = 0, mes_min = 0;
    int reg_max = 0, reg_min = 0;

    for (i = 0; i < MESES; i++) {
        for (j = 0; j < REGIONES; j++) {
            if (temperaturas[i][j] > temp_max) {
                temp_max = temperaturas[i][j];
                mes_max = i;
                reg_max = j;
            }
            if (temperaturas[i][j] < temp_min) {
                temp_min = temperaturas[i][j];
                mes_min = i;
                reg_min = j;
            }
        }
    }

    // Determinar cuál de SUR (2), PACIFICO (4) y CARIBE (5) tiene mayor promedio anual
int max_region = 2; // Empieza con SUR
if (promedios[4] > promedios[max_region]) max_region = 4;
if (promedios[5] > promedios[max_region]) max_region = 5;
    // Resultados
printf("\nPromedio anual de cada región:\n");
for (j = 0; j < REGIONES; j++) {
    printf("  %s: %.2f\n", regiones[j], promedios[j]);
    }

printf("\nTemperatura máxima: %.2f°C\n", temp_max);
    printf("  Mes: %d, Región: %s\n", mes_max + 1, regiones[reg_max]);

printf("\nTemperatura mínima: %.2f°C\n", temp_min);
printf("  Mes: %d, Región: %s\n", mes_min + 1, regiones[reg_min]);

printf("\nRegión con mayor promedio anual entre SUR, PACIFICO y CARIBE:\n");
printf("  %s con %.2f°C\n", regiones[max_region], promedios[max_region]);

return 0;
}
