#include <stdio.h>

double calcularMedia(double a, double b) {
    return (a + b) / 2.0;
}

int main(void) {
    printf("Media: %.2f\n", calcularMedia(8, 9));
    return 0;
}
