#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int num, i, j, primo;
  
  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  
  printf("Os números primos até %d são:\n 1 ", num);
  
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
