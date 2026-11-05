#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;
    printf("Temperatura em Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    return 0;
}
