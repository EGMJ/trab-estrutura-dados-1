#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int numero, i, fatorial = 1;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        printf("0! = 1");
    }

    for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("%d! = %d", numero, fatorial);
}
