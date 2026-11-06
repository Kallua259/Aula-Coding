#include <stdio.h>

int main(void) {
    printf("--- Matriz 3x4 ---\n");
    for (int linha = 1; linha <= 3; linha++) {
        for (int coluna = 1; coluna <= 4; coluna++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
