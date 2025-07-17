#include <stdio.h>
#include <stdlib.h>

int main() {

float cal;
int r[5] = {0};

printf(" ingresa calificacion ( -1 para terminar): ");
scanf("%f, &cal");

while ( cal != -1) {


 if (cal <= 3.99) r[0]++;
 else if (cal <= 5.99) r[1]++;
 else if (cal <= 7.99) r[2]++;
 else if (cal <= 8.99) r[3]++;
 else if (cal <= 10) r[4]++;

 printf("ingresa otra (-1 para terminar: ");
 scanf("%f", &cal);


}
printf("\n0..3.99 = %d", r[0]);
printf("\n4..5.99 = %d", r[1]);
printf("\n6..7.99 = %d", r[2]);
printf("\n8..8.99 = %d", r[3]);
printf("\n9..10   = %d\n", r[4]);

return 0;


}
