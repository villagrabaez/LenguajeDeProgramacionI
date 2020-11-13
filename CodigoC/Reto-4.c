#include <stdio.h>

int main()
{
  int numero = 5;

  int valorUsuario;

  printf("Ingrese un numero entre 1 y 10: \n");
  scanf("%d", &valorUsuario);

  if ( valorUsuario == numero ) {
    printf("Adivinaste!");
  } else {
    printf("Ese no es. Perdiste :(");
  }
}