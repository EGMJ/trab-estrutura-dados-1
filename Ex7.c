#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um n�mero positivo: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("%d � maior que 10.\n", numero);
    }else if (numero < 0) {
        printf("%d Burro tem que ser positivo.\n", numero);
    }else {
        printf("%d n�o � maior que 10.\n", numero);
    }
}
