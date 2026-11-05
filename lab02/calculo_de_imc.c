#include <stdio.h>

int main(void) {
    double peso, altura, imc;
    printf("Peso (kg): "); scanf("%lf", &peso);
    printf("Altura (m): "); scanf("%lf", &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    return 0;
}
