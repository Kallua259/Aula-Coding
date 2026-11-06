#include <stdio.h>

double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero! ");
        return 0.0;
    }
}

int main(void) {
    double num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("\n--- RESULTADOS ---\n");
    printf("Soma: %.2f\n", somar(num1, num2));
    printf("Subtracao: %.2f\n", subtrair(num1, num2));
    printf("Multiplicacao: %.2f\n", multiplicar(num1, num2));
    
    if (num2 != 0) {
        printf("Divisao: %.2f\n", dividir(num1, num2));
    } else {
        dividir(num1, num2); // Dispara a mensagem de erro da funcao
    }

    return 0;
}
