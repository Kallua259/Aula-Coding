#include <stdio.h>

int main(void) {
    float n1, n2, n3, media;
    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0f;
    printf("Media: %.2f\n", media);
    return 0;
}
