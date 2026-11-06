#include <stdio.h>

void mostrarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

void mostrarTabuadas(int inicio, int fim) {
    for (int n = inicio; n <= fim; n++) {
        printf("\n--- Tabuada do %d ---\n", n);
        mostrarTabuada(n);
    }
}

int main(void) {
    mostrarTabuadas(2, 4);
    return 0;
}
