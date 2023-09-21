#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
    setlocale(LC_ALL,"Portuguese");
    int numeral;

    printf("Digite um numero: ");
    scanf("%d", &numeral);
    
    printf("O numeral digitado foi: %d", numeral);
}
