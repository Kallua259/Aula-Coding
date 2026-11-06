#include <stdio.h>
#include <stdbool.h>

double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

bool aprovado(double media, double frequencia) {
    return media >= 7.0 && frequencia >= 75.0;
}

void mostrarResultado(double media, double frequencia) {
    printf("Media final: %.2f\n", media);
    printf("Frequencia: %.2f%%\n", frequencia);
    
    if (aprovado(media, frequencia)) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}

int main(void) {
    double n1 = 8.0, n2 = 7.5, n3 = 6.5;
    double freq = 80.0;

    double media = calcularMedia(n1, n2, n3);
    mostrarResultado(media, freq);

    return 0;
}
