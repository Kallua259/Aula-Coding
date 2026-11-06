#include <stdio.h>

int main(void) {
    float nota, soma = 0;
    int quantidade = 0;
    printf("Digite a nota ou -1 p/sair: ");
    scanf("%f", &nota);
    while (nota != -1) {
        soma += nota;
        quantidade++;
        printf("Digite a nota ou -1 p/sair: ");
        scanf("%f", &nota);
    }
    if (quantidade > 0) {
        printf("Qtd notas: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media = %.2f\n", soma / quantidade);
    }
    return 0;
}
