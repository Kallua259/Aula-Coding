#include <stdio.h>

int main() {
    double valor, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valor);

    if (valor >= 500.0) {
        desconto = valor * 0.10;
    } else if (valor >= 200.0) {
        desconto = valor * 0.05;
    } else {
        desconto = 0.0;
    }

    valorFinal = valor - desconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
