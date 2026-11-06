#include <stdio.h>

int main(void) {
    int opcao;
    do {
        printf("\n1 - Mostrar mensagem\n2 - Mostrar seu nome\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: printf("Seja bem-vindo!\n"); break;
            case 2: printf("Kaue Almeida da Silva\n"); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida\n");
        }
    } while (opcao != 0);
    return 0;
}
