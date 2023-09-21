#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
    int contador = 0;

    printf("Os dex primeiros numeros negativos são: \n");
    while (contador > -11) {
        printf("%d ", contador);
        contador--;
    }
    printf("\n");
}
