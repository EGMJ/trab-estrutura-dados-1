#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int maior, menor, num1, num2;

    printf("Digite dois números diferentes: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    printf("A divisão de %d por %d é: %d\n", maior, menor, maior/menor);
}
