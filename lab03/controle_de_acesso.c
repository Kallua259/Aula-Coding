#include <stdio.h>

int main() {
    int idade = 20;
    int ativo = 1;
    int admin = 0;

    if (idade >= 18 && ativo == 1 || admin == 1) {
        printf("Acesso liberado (forma 1)\n");
    }

    if ((idade >= 18 && ativo == 1) || admin == 1) {
        printf("Acesso liberado (forma segura com parenteses)\n");
    }

    return 0;
}
