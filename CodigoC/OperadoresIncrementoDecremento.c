#include <stdio.h>

int main()
{
  int valor1 = 5;

  printf("El valor es: %i\n", valor1);

  // Operador de incremento
  valor1++; // + 1
  valor1++; // + 1

  printf("El nuevo valor es: %i\n", valor1);

  // Operador de decremento
  valor1--;
  printf("El nuevo valor disminuido es: %i\n", valor1);
}