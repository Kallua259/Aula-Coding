#include <stdio.h>
double calcularDesconto(double valor, double percentual);

int main(void) {
    printf("Desconto de 10%% sobre R$ 100.00 = R$ %.2f\n", calcularDesconto(100.0, 10.0));
    printf("Desconto de 5%% sobre R$ 500.00 = R$ %.2f\n", calcularDesconto(500.0, 5.0));
    printf("Desconto de 20%% sobre R$ 250.00 = R$ %.2f\n", calcularDesconto(250.0, 20.0));
    
    return 0;
}
double calcularDesconto(double valor, double percentual) {
    return valor * percentual / 100.0;
}
