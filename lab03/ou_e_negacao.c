#include <stdio.h>

int main() {
    int dia;
    int bloqueado = 0;

    printf("Digite o numero do dia da semana (ex: 5 para quinta, 6 para sabado, 7 para domingo): ");
    scanf("%d", &dia);

    if (dia == 6 || dia == 7) {
        printf("Fim de semana\n");
    } else {
        printf("Dia util\n");
    }

    printf("O usuario esta bloqueado? (0 para nao, 1 para sim): ");
    scanf("%d", &bloqueado);

    if (!bloqueado) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado (usuario bloqueado)\n");
    }

    return 0;
}
