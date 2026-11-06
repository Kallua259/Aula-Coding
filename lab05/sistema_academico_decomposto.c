#include <stdio.h>

double calcularMedia(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

void mostrarSituacao(double media) {
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main(void) {
    double n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    media = calcularMedia(n1, n2, n3);
    printf("Media: %.2f\n", media);
    
    mostrarSituacao(media);

    return 0;
}
