#include <stdio.h>

int main()
{
  int i, j;
  int matriz[3][4] = {
    {1, 1, 1, 1}, // 4
    {2, 2, 3, 3}, // 10
    {5, 5, 13, 3} // 26
  };

  for (i = 0; i < 3; i++) {
    int contador = 0;
    for (j = 0; j < 4; j++) {
      // contador = contador + matriz[i][j];
      contador += matriz[i][j];
    }
    printf("Fila %i: %i \n", i + 1, contador);
  }
}