#include <stdio.h>
#include <stdint.h>
int main() {
uint8_t a;
uint8_t b = 6;
printf ("a a==b a<b a>b\n");
for (a = 0; a < 10; a++) {
printf ("%d %d %d %d", a, a==b, a<b, a>b );
}
return 0;
}