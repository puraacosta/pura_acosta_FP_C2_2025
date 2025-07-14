#include <stdio.h>
#include <stdlib.h>


int multiplo(int a, int b) {
    return b % a == 0;
}
int main() {


int x, y;


    printf("Ingresa dos números: ");


    scanf("%d %d", &x, &y);


    printf("%d es %smúltiplo de %d\n", y, multiplo(x, y) ? "" : "no ", x);


    return 0;
}


