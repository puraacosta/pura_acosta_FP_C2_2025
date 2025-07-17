#include <stdio.h>
#include <stdlib.h>

/* funcion que cuenta pares e impares*/

void parimp(int num, int *par, int *imp) {

if ( num % 2 == 0) (*par)++;
else (*imp)++;


}

int main() {

int N, num, par = 0, imp =0;

printf("ingresa el numero de datos: ");
scanf("%d", &N);

for(int i = 1; i <= N; i++) {

printf("Ingresa el número %d: ", i);
scanf("%d", &num);
parimp(num, &par, &imp);


}
printf("Cantidad de pares: %d\nCantidad de impares: %d\n", par, imp);
return 0;

}
