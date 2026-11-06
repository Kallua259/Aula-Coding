#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d e maior\n", a);
    } else if (b > a) {
        printf("%d e maior\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }
    return 0;
}
