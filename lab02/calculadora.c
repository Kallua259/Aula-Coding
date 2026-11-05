#include <stdio.h>

int main(void) {
    int a, b;
    printf("Primeiro numero: "); scanf("%d", &a);
    printf("Segundo numero: "); scanf("%d", &b);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (double)a / b);
    printf("Resto: %d\n", a % b);
    return 0;
}
