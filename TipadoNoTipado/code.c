#include <stdio.h>

int main() {

  int numero1 = 2;

  numero1 = 5;

  // No se puede cambiar de tipo durante la ejecucion del programa
  // numero1 = "Soy un numero";

  char texto[] = "Soy un texto";

  // No se puede hacer operaciones entre tipos diferentes
  // int suma = numero1 + texto;

  printf("Hola Mundo!\n");
  printf("%i\n", numero1);
  printf("%s\n", texto);
}