#include <stdio.h>

int main(void) {
    float nota;
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10) {
        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &nota);
    }
    printf("Nota aceita: %.2f\n", nota);
    return 0;
}
