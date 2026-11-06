#include <stdio.h>

int main(void) {
    int contador = 1;
    float nota, soma = 0;
    while (contador <= 5) {
        printf("Nota %d: ", contador);
        scanf("%f", &nota);
        soma += nota;
        contador++;
    }
    printf("Media = %.2f\n", soma / 5.0f);
    return 0;
}
