#include <stdio.h>

int main(void) {
    double a, b, resultado;
    int opcao;

    printf("Digite o primeiro numero (a): ");
    scanf("%lf", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%lf", &b);

    printf("\n--- CALCULADORA ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Divisao por zero nao permitida\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
