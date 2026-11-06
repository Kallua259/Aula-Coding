#include <stdio.h>

void mostrarMenu(void) {
    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main(void) {
    mostrarMenu();
    return 0;
}
