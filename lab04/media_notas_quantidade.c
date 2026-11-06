#include <stdio.h>

int main(void) {
    int quantidade;
    float nota;
    float soma = 0;

    printf("Quantidade de notas: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    if (quantidade > 0) {
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Quantidade invalida de notas.\n");
    }

    return 0;
}
