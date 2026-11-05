#include <stdio.h>

int main(void) {
    const double PI = 3.1415926535;
    double raio, area;
    printf("Raio do circulo: ");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    printf("Area: %.2f\n", area);
    return 0;
}
