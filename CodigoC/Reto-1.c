#include <stdio.h>

#define NUEVALINEA '\n'

int main()
{
  // crea dos variables e inilizalas
  int numero1;
  numero1 = 2;

  int numero2 = 3;

  const int YEAR = 2020;

  printf("El primer valor es: %i %c", numero1, NUEVALINEA);
  printf("El segundo valor es: %i %c", numero2, NUEVALINEA);
  printf("Estamos en el año %i", YEAR);

  numero1 = 10;
  numero2 = 45;

  printf("El primer valor es: %i %c", numero1, NUEVALINEA);
  printf("El segundo valor es: %i %c", numero2, NUEVALINEA);
}