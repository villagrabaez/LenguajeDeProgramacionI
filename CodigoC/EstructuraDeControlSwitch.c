#include <stdio.h>

int main () {
  int a = 30;

  switch (a)
  {
  case 10 :
    printf("A es igual a 10.\n");
    break;
  case 20 :
    printf("A es igual a 20.\n");
    break;
  case 30 :
    printf("A es igual a 30.\n");
    break;
  default:
    printf("Ninguno de los valores coincide con el valor de A.\n");
    break;
  }
}