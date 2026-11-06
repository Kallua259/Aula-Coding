#include <stdio.h>

int main(void) {
    // Contagem de impares: 1, 3, 5, ..., 19
    for (int i = 1; i <= 19; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
