#include <stdio.h>

int main(void) {
    int idade = 20;

    if (idade >= 18) {
        int desconto = 10;
        printf("Desconto: %d\n", desconto);
    }
    for (int i = 0; i < 3; i++) {
        printf("Iteracao %d\n", i);
    }
    return 0;
}
