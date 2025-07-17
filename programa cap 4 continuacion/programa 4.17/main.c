#include <stdio.h>
#include <stdlib.h>

int main(void) {
float gol=0, pac=0, car=0, g, p, c;


for (int i = 1; i <=12; i++) {

    printf("\nmes %d - lluvias golfox, pacifico, caribe: ", i);

    scanf("%f %f %f , %g, &p, &c");

    gol += g; pac += p; car += c;


}

float pg = gol/12, pp = pac/12, pc= car/12;
printf("\nPromedio Golfo:    %6.2f", pg);
printf("\nPromedio Pacifico: %6.2f", pp);
printf("\nPromedio Caribe:   %6.2f\n", pc);
  if (pg >= pp && pg >= pc)      printf("Mayor promedio: Golfo (%6.2f)\n", pg);
    else if (pp >= pc)             printf("Mayor promedio: Pacifico (%6.2f)\n", pp);
    else                           printf("Mayor promedio: Caribe (%6.2f)\n", pc);

    return 0;
}


