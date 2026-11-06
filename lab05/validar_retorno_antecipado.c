#include <stdio.h>
#include <stdbool.h>

bool notaValida(double nota) {
    if (nota < 0 || nota > 10) {
        return false;
    }
    return true;
}

double lerNotaValida(void) {
    double nota;
    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%lf", &nota);
    } while (!notaValida(nota));
    return nota;
}

int main(void) {
    double n1 = lerNotaValida();
    printf("Nota aceita: %.2f\n", n1);
    return 0;
}
