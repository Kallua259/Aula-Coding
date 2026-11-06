#include <stdio.h>

int main() {
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    if (x != 0 && 10 / x > 2) {
        printf("Condicao verdadeira\n");
    } else {
        printf("Condicao falsa ou evitada por curto-circuito (x = 0)\n");
    }

    return 0;
}
