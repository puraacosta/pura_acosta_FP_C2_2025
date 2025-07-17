#include <stdio.h>
#include <stdlib.h>

int main(void) {
float temp, sum = 0.0f, max = -1e9f, min = 1e9f;
int hmax = 0, hmin = 0;

for ( int h = 1; h <= 24; h++) {

    printf(" ingresa la temperatura de la hora %d: ", h);
    if (scanf("%f", &temp) != 1) return 1; /* manejo simple de error */
    sum += temp;

    if (temp > max ) { max = temp; hmax = h; }
    if (temp < min)  {min = temp; hmin = h; }



   printf("\nPromedio del día: %.2f", sum / 24.0f);
   printf("\nTemperatura máxima: %.2f (hora %d)", max, hmax);
  printf("\nTemperatura mínima: %.2f (hora %d)\n", min, hmin);

   return 0;

}



}
