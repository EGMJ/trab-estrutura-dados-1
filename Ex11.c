#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media;

    printf("Digite tr�s valores para n1, n2 e n3: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    printf("O valor da m�dia �: %.2f\n", media);
}
