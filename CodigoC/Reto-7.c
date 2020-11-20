#include <stdio.h>

// Secuencia de Fibonacci
// a b a b
// 0 1 1 2 3 5

int main()
{
  int a = 0, b = 1, i;

  for(i = 0; i < 15; i++) {
    printf("%i ", a);
    printf("%i ", b);
    a = a + b;
    b = b + a;
  }

  return 0;
}