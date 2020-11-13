#include <stdio.h>

int main()
{
  int calificacion = 0;

  printf("Ingrese su calificacion: \n");
  scanf("%d", &calificacion);

  if ( calificacion < 60 ) {
    printf("Estas aplazado.\n");
  } else if (calificacion > 90) {
    printf("Has aprobado :)");
  } else if ( calificacion >= 60 ) {
    printf("Has aprobado el curso!\n");
  }
}