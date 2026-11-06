#include <stdio.h>

void mostrarSoma(int a, int b) {
    printf("Soma: %d\n", a + b);
}

void mostrarProduto(int a, int b) {
    printf("Produto: %d\n", a * b);
}

int main(void) {
    // Testes com valores positivos, negativos e zero
    mostrarSoma(5, 3);
    mostrarProduto(5, 3);

    mostrarSoma(-4, 2);
    mostrarProduto(-4, 2);

    mostrarSoma(0, 0);
    mostrarProduto(7, 0);

    return 0;
}
