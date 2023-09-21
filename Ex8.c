#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("%d é positivo.\n", numero);
    }else if (numero < 0) {
        printf("%d é negativo.\n", numero);
    }else{
        printf("O número é zero.\n");
    }
}
