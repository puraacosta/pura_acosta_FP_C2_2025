#include <stdio.h>
#include <stdlib.h>

/* prototipo */

int F1(int X, int *Y);


/* globales */

int  A = 3, B = 7, C = 4, D =2;

int main(void) {

 A = F1(C, &D);
printf("\nA=%d B=%d C=%d D=%d", A, B, C, D);
C = 3;
C = F1(A, &C);

printf("\nA=%d B=%d C=%d D=%d\n", A, B, C, D);

return 0;

}

int F1(int X, int *Y) {

int A_local = X * (*Y);

C++;   /* USA GLOBAL */
B += *Y;   /* USA GLOBAL */

printf("\n[A_local=%d B=%d C=%d D=%d]", A_local, B, C, D);
(*Y)--; /*  decrementa el valor apuntado, NO el puntero */
return C; /* regresa global c */




}


