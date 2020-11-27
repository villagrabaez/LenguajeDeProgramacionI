#include <stdio.h>

// funcion basica
void saludo() {
  printf("Hola Mundo!\n");
}

// funciones con retorno
int suma(int numA, int numB) {
  // int suma = numA + numB;
  // return suma;

  return numA + numB;
}

long factorial(long numero) {
  if ( numero <= 1 ) {
    return 1;
  } else {
    return ( numero * factorial(numero - 1) );
  }
}

int main()
{
  // funcion basica
  // saludo();

  // int numA = 2, numB = 3;
  // int suma = numA + numB;
  // printf("La suma es: %i \n", suma(4, 5));

  // funciones con retorno
  // int numA, numB;

  // printf("Ingresa los valores a sumar: \n");

  // printf("primer numero: ");
  // scanf("%i", &numA);

  // printf("segundo numero: ");
  // scanf("%i", &numB);

  // printf("La suma es: %i", suma(numA, numB));

  // funcion recursiva

  // 5! = 5 * 4 * 3 * 2* 1 = 120;
  int numero;

  printf("Ingrese un valor: ");
  scanf("%i", &numero);
  printf("Factorial de %i es: %i", numero, factorial(numero));

  return 0;
}
