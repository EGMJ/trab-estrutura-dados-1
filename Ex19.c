#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int matriz[5][5], i, j, valor = 10;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = valor;
      valor++;
    }
  }
  
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
  
    printf("\n");
  }
}