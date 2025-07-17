#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a =1, b =2, c = 3, d = 4;
printf("Antes: %d %d %d %d\n" , a, b, c, d);
a += c;         // a = a + c

b+= d;          // b = b + d

c *= 2;          // c = c * 2

printf(" despues: %d %d %d %d\n" , a, b, c, d);

return 0;




}
