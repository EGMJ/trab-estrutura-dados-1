#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int num, i, j, primo;
  
  printf("Digite um n�mero inteiro: ");
  scanf("%d", &num);
  
  printf("Os n�meros primos at� %d s�o:\n 1 ", num);
  
  for (i = 2; i <= num; i++) {
    primo = 1;
  
    for (j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        primo = 0;
      }
    }

    if (primo) {
      printf("%d ", i);
    }
  }
}
