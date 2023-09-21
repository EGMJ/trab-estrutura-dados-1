#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int i, j;

  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 5; j++) {
      printf("%d-%d ", i, j);
    }
  
    printf("\n");
  }
}