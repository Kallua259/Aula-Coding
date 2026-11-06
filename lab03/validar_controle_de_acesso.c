#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int idade, senha, bloqInt;
    printf("Idade: "); scanf("%d", &idade);
    printf("Senha: "); scanf("%d", &senha);
    printf("Bloqueado (1/0): "); scanf("%d", &bloqInt);
    bool bloq = bloqInt != 0;
    if (idade < 18) printf("- Menor de idade\n");
    if (senha != 1234) printf("- Senha incorreta\n");
    if (bloq) printf("- Usuario bloqueado\n");
    if (idade >= 18 && senha == 1234 && !bloq)
        printf("Acesso permitido\n");
    return 0;
}
