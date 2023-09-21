#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[64];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Bem Vindo, %s", nome);
}
