#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18 && idade <= 65) {
        printf("Faixa etaria permitida\n");
    } else {
        printf("Faixa etaria nao permitida\n");
    }
    return 0;
}
