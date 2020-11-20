#include <stdio.h>

int main()
{
  int cantidadDeElementos[5];
  int i;

  cantidadDeElementos[0] = 22;
  cantidadDeElementos[1] = 6;
  cantidadDeElementos[2] = 10;
  cantidadDeElementos[3] = 0;
  cantidadDeElementos[4] = 100;

  // printf("%i\n", cantidadDeElementos[0]);
  // printf("%i\n", cantidadDeElementos[2]);
  // printf("%i\n", cantidadDeElementos[4]);

  for( i = 0; i < 5; i++) {
    printf("%i ", cantidadDeElementos[i]);
  }

  return 0;
}