#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("A (%d) e o maior\n", a);
    } else if (b >= a && b >= c) {
        printf("B (%d) e o maior\n", b);
    } else {
        printf("C (%d) e o maior\n", c);
    }

    return 0;
}
