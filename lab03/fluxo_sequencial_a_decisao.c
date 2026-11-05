#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Entrada permitida\n");
    }
    printf("Fim do programa\n");
    return 0;
}
