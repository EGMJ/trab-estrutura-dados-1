#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int vetor[15], i;

  vetor[0] = 1;
  vetor[1] = 1;
  
  for (i = 2; i < 15; i++) {
    vetor[i] = vetor[i-1] + vetor[i-2];
  }
  
  for (i = 0; i < 15; i++) {
    printf("%d ", vetor[i]);
  }
}