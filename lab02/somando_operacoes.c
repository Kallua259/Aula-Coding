#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);
    printf("Soma = %d\n", n1 + n2);
    printf("Subtracao = %d\n", n1 - n2);
    printf("Multiplicacao = %d\n", n1 * n2);
    printf("Divisao Inteira = %d\n", n1 / n2);
    printf("Resto (Modulo) = %d\n", n1 % n2);
    return 0;
}
