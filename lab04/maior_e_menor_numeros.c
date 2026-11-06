#include <stdio.h>

int main(void) {
    int numero, maior, menor;
    printf("Digite o 1o numero: ");
    scanf("%d", &maior);
    menor = maior;
    for (int i = 2; i <= 5; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
    }
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}
