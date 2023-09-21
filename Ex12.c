#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    float a, b;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    
    b = (a * a + 2 * a) / 5.0;
  
    printf("O valor de b é: %.2f", b);
}
