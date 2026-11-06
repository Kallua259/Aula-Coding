#include <stdio.h>

double calcularQuadrado(double x) {
    return x * x;
}

double calcularAreaCirculo(double raio) {
    const double PI = 3.1415926535;
    return PI * calcularQuadrado(raio);
}

int main(void) {
    double raio = 5.0;
    printf("Area do circulo com raio %.2f = %.2f\n", raio, calcularAreaCirculo(raio));
    return 0;
}
