#include <stdio.h>

int main() {
    float media, frequencia;

    printf("Digite a media final: ");
    scanf("%f", &media);
    printf("Digite a frequencia (em porcentagem): ");
    scanf("%f", &frequencia);

    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Aprovado\n");
    } else if (media < 7.0f && frequencia < 75.0f) {
        printf("Reprovado por nota e frequencia\n");
    } else if (media < 7.0f) {
        printf("Reprovado por nota\n");
    } else {
        printf("Reprovado por frequencia\n");
    }

    return 0;
}
