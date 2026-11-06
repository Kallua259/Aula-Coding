#include <stdio.h>

int main(void) {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    if (nota >= 7.0f) {
        printf("Nota boa\n");
    } else if (nota >= 5.0f) {
        printf("Nota razoavel\n");
    } else {
        printf("Nota baixa\n");
    }
    return 0;
}
