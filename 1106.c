#include <stdio.h>
int main() {
uint8_t a;
uint8_t b = 6;
printf ("a a==b a<b a>b");
for (a = 0; a < 512; a++) {
printf ("%d %d %d %d", a, a==b, a<b, a>b );
}
return 0;
}

#include <stdio.h>
#include <stint.h>
int main() {
uint8_t a;
uint8_t b = 6;
printf ("a a==b a<b a>b\n");
for (int i = 0; i < 32; i++) {
  a = (a+1)% 16;
printf ("%d %d %d %d\n", a, a==b, a<b, a>b );
  return 0;
}
