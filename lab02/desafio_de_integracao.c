#include <stdio.h>

int main(void) {
    int a, b;
    float n1, n2, n3;
    printf("Inteiros (a b): "); scanf("%d %d", &a, &b);
    printf("Notas (n1 n2 n3): "); scanf("%f %f %f", &n1, &n2, &n3);
    printf("\n--- OPERACOES INTEIROS ---\n");
    printf("Soma: %d | Sub: %d | Mult: %d\n", a+b, a-b, a*b);
    printf("Divisao: %.2f | Resto: %d\n", (double)a/b, a%b);
    printf("\n--- MEDIA DAS NOTAS ---\n");
    printf("Media: %.2f\n", (n1+n2+n3)/3.0f);
    return 0;
}
