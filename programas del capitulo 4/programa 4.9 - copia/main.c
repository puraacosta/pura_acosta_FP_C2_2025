#include <stdio.h>
#include <stdlib.h>


int multiplo(int a, int b) {
    return b % a == 0;
}
int main() {


int x, y;


    printf("Ingresa dos n�meros: ");


    scanf("%d %d", &x, &y);


    printf("%d es %sm�ltiplo de %d\n", y, multiplo(x, y) ? "" : "no ", x);


    return 0;
}


