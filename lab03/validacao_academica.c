#include <stdio.h>

int main() {
    float media = 8.0f;
    float frequencia = 80.0f;
    int estudante = 1;
    int idade = 22;
    int bloqueado = 0;

    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Aprovado\n");
    }

    if (estudante || idade >= 60) {
        printf("Desconto aplicado\n");
    }

    if (idade >= 18 && !bloqueado) {
        printf("Entrada permitida\n");
    }

    return 0;
}
