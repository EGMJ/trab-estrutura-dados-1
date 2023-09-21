#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

  int num, i, primo = 1;
  printf("Digite um n�mero inteiro: ");
  scanf("%d", &num);
  if (num < 2) {
    primo = 0;
  }
  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      primo = 0;
    }
  }
  if (primo) {
    printf("%d é um número primo.", num);
  } else {
    printf("%d não é um número primo.", num);
  }

}
