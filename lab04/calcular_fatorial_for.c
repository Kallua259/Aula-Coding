#include <stdio.h>

int main(void) {
    int n = 5;
    long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    printf("Fatorial de %d = %lld\n", n, fatorial);
    return 0;
}
