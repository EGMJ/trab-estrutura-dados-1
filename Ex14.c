#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

    int primeiro, razao, i, termo;

    printf("Digite o primeiro n�mero e a raz�o da sequ�ncia: ");
    scanf("%d %d", &primeiro, &razao);

    for (i = 0; i <= 10; i++) {
        termo = primeiro + i * razao;
        printf("O %d� termo �: %d\n", i + 1, termo);
    }
}
