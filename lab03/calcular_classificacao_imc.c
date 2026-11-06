#include <stdio.h>

int main() {
    double peso;
    double altura;
    double imc;

    printf("Peso (kg): ");
    scanf("%lf", &peso);
    printf("Altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso adequado\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
