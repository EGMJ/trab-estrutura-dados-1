#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("%d � positivo.\n", numero);
    }else if (numero < 0) {
        printf("%d � negativo.\n", numero);
    }else{
        printf("O n�mero � zero.\n");
    }
}
