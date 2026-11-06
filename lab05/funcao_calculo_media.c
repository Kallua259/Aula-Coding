#include <stdio.h>

double calcularMedia(double n1, double n2) {
    double media = (n1 + n2) / 2.0;
    return media;
}

int main(void) {
    printf("Media (8.0 e 6.0) = %.2f\n", calcularMedia(8.0, 6.0));
    printf("Media (8.0 e 9.0) = %.2f\n", calcularMedia(8.0, 9.0));
    return 0;
}
