#include <stdio.h>

int main()
{
  int numero = 1;

  do {
    printf("%i ", numero);
    numero++;
  } while ( numero <= 100 );

  return 0;
}