#include <stdio.h>
#include <stdlib.h>

int mad(int n) {

int i = n / 2;

while ( n % i) i--;

return i;

}
int main() {

int n;
printf(" ingrese el numero");
scanf("%d , &n");

printf(" mayor divisor de %d es: %d\n" , n, mad(n));
return 0;

}
