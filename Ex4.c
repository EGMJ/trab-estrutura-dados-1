#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


void main(void){
	setlocale(LC_ALL,"Portuguese");
	bool polaridade;
	
	printf("Para definir a polaridade digite 1 ou 0: ");
	scanf("%d", &polaridade);

    printf("Valor digitado e: %d\n", polaridade);


    polaridade = inversor(polaridade);
    printf("O inverso e: %d", polaridade);

}

void inversor(polaridade){
    polaridade = !polaridade;
}
