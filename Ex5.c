#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int num1, num2, subtracao;
    
    printf("Digite dois números para subtrair: ");
    scanf("%d %d", &num1, &num2);
    
    subtracao = num1 - num2;
    printf("A subtração de %d por %d é: %d\n", num1, num2, subtracao);
    
}
