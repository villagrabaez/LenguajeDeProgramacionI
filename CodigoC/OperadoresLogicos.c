#include <stdio.h>

int main()
{
  int valor1 = 2;
  int valor2 = 4;

  int activo = 1;
  int inacivo = 1;

  if ( valor1 == valor2 && activo == 1 ) {
    printf("Ambas condiciones son verdaderas\n");
  } else {
    printf("Las condiciones no son verdaderas\n");
  }

  if ( valor1 == valor2 || activo == 2 ) {
    printf("Una de las codiciones es verdadera\n");
  } else {
    printf("Ambas son falsas\n");
  }

  if (inacivo != 0) {
    printf("Es igual a cero\n");
  } else {
    printf("No es igual a cero\n");
  }
}