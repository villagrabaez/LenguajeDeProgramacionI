#include <stdio.h>

int main()
{
  int valor1 = 10;
  int valor2 = 10;

  if (valor1 >= valor2) {
    printf("valor1 es mayor o igual a valor2\n");
  } else {
    printf("valor1 es menor a valor2\n");
  }

  if (valor1 <= valor2) {
    printf("valor1 es menor o igual a valor2\n");
  } else {
    printf("valor1 es mayor a valor2\n");
  }

  if (valor1 == valor2) {
    printf("los valores son iguales\n");
  } else {
    printf("los valores no son iguales\n");
  }

  if (valor1 != valor2) {
    printf("los valores son diferentes\n");
  } else {
    printf("los valores son iguales\n");
  }
}