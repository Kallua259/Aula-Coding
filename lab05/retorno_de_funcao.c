#include <stdio.h>

int somar(int a, int b) {
    int resultado = a + b;
    return resultado; // Corrigido para retornar o valor calculado
}

int main(void) {
    printf("%d\n", somar(3, 4));
    return 0;
}
