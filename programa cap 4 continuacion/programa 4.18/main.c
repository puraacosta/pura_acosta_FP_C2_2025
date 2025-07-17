#include <stdio.h>
#include <stdlib.h>

void mayor(float gol, float pac, float car) {

float pg = gol / 12, pp= pac / 12, pc = car / 12;

if (pg>= pp && pg >= pc)
    printf("\nregion con mayor promedio: golfo. promedio: %6.2f" , pg);
else if (pp >= pc)
    printf("\nregion con mayor promedio: pacifico. promedio: %6.2f" , pp);
else

printf("/nregion con mayor promedio: caribe. promedio: %6.2f , pc");


}
int main(void){
float GOL=0, PAC=0, CAR=0, g, p, c;

for (int i = 1; i <= 12; i++) {
  printf("\n\nIngresa las lluvias del mes %d", i);
  printf("\nRegiones Golfo, Pacífico y Caribe: ");
  scanf("%f %f %f", &g, &p, &c);

  GOL += g; PAC += p; CAR += c;
}
 printf("\n\nPromedio de lluvias Región Golfo:    %6.2f", GOL / 12);
    printf("\nPromedio de lluvias Región Pacífico: %6.2f", PAC / 12);
    printf("\nPromedio de lluvias Región Caribe:   %6.2f\n", CAR / 12);

    mayor(GOL, PAC, CAR);
    printf("\n");
    return 0;
}
