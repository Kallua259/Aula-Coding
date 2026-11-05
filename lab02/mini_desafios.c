#include <stdio.h>

int main(void) {
    // 1. Correcao da divisao
    int a = 10, b = 3;
    float div_correta = (float)a / b;
    printf("1. Divisao: %f\n", div_correta);

    // 2. Precedencia
    printf("2. Com parenteses: %d | Sem: %d\n", (2 + 3) * 4, 2 + 3 * 4);

    // 3. Incrementos
    int contador = 0;
    contador++; contador++; contador++;
    printf("3. Contador: %d\n", contador);

    // 4. Perda de informacao
    double valor = 8.75;
    int parte_inteira = (int)valor;
    printf("4. Double: %.2f -> Int %d\n", valor, parte_inteira);
    return 0;
}
