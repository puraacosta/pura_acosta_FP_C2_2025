#include <stdio.h>
#include <stdlib.h>

unsigned long long productoria(int n) {
 unsigned long long p = 1;
 for (int i = 1; i <= n; i++) p *= i;
 return p;

}
int main(void) {
int num;
do{

    printf("ingresa el numero (1-20): ");
    scanf("%d" , &num);
} while (num < 1 || num > 20);


printf(" la productoria de %d es: %11u\n" , num , productoria(num));
return 0;


}
