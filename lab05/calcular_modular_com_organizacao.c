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
    return a / b;
}

void mostrarMenu(void) {
    printf("\n========================\n");
    printf("      CALCULADORA       \n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

void executarOperacao(int opcao) {
    double a, b;

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite o primeiro numero: ");
        scanf("%lf", &a);
        printf("Digite o segundo numero: ");
        scanf("%lf", &b);
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", somar(a, b));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(a, b));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(a, b));
            break;
        case 4:
            if (b != 0) {
                printf("Resultado: %.2f\n", dividir(a, b));
            } else {
                printf("Erro: Divisao por zero nao permitida!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }
}

int main(void) {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao != 0) {
            executarOperacao(opcao);
        }
    } while (opcao != 0);

    printf("Encerrando a calculadora...\n");
    return 0;
}
