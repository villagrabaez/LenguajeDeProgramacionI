
#include <stdio.h>

int sumar(int numa, int numb) {
  return numa + numb;
}

int main() {
  int num1 = 2;
  int num2 = 3;



  int suma = num1 + num2;

  printf("La suma es: %i\n", suma);
  printf("La suma es: %i\n", sumar(3, 3));

  // printf("La suma es: %i\n", multiplicar(3, 3));
}