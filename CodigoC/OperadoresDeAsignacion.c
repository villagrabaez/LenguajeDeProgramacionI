#include <stdio.h>

int main()
{
  int a = 1;

  printf("El valor de a es: %i\n", a);

  // a = a + 5;
  a += 5;
  a -= 5;
  a *= 6;
  a /= 2;
  a %= 2;

  printf("El valor de a es: %i\n", a);
}