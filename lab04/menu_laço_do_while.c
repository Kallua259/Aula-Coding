#include <stdio.h>

int main(void) {
    int opcao;
    do {
        printf("1 - Cadastrar\n2 - Consultar\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: printf("Cadastrar\n"); break;
            case 2: printf("Consultar\n"); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida\n");
        }
    } while (opcao != 0);
    return 0;
}
