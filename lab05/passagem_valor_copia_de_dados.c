#include <stdio.h>

void dobrar(int x) {
    x = x * 2;
    printf("Dentro: %d\n", x);
}

int main(void) {
    int numero = 5;
    dobrar(numero);
    printf("Fora: %d\n", numero);
    return 0;
}
