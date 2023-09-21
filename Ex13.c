#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int num, i, quadrado;
    
    for (i = 1; i <= 15; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
    
        quadrado = num * num;
        
        printf("O quadrado de %d é: %d\n", num, quadrado);
    }
}
