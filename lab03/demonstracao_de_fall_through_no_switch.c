#include <stdio.h>

int main(void) {
    int opcao = 1;

    switch (opcao) {
        case 1:
            printf("Um\n");
        case 2:
            printf("Dois\n");
            break;
        default:
            printf("Outro\n");
    }

    return 0;
}
