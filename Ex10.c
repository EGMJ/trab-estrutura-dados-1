#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("Digite um valor para X: ");
    scanf("%d", &x);
    
    y = x + 5;
    
    printf("O valor de Y é %d.\n", y);
}
