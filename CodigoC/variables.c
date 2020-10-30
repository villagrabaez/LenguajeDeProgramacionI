#include <stdio.h>

#define NUEVALINEA '\n'

int main()
{
  // Comentarios en linea
  /*
    Comentario de bloque
  */

  // Declaracion de variable de tipo entero
  int miVariableEntero;
  const int LONGITUD = 10;

  miVariableEntero = 20;

  printf("Primer valor: %i %c", miVariableEntero, NUEVALINEA);

  miVariableEntero = 40;

  printf("Segundo valor: %i %c", miVariableEntero, NUEVALINEA);

  return 0;
}
