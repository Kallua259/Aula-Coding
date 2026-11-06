#include <stdio.h>
#include <stdbool.h>

bool ehPar(int numero) {
    return numero % 2 == 0;
}

bool podeEntrar(int idade, bool bloqueado, bool possuiIngresso) {
    return idade >= 18 && !bloqueado && possuiIngresso;
}

int main(void) {
    int num = 7;
    if (ehPar(num)) {
        printf("O numero %d e Par\n", num);
    } else {
        printf("O numero %d e Impar\n", num);
    }
    int idade = 20;
    int bloqInt = 0;
    int ingInt = 1;
    
    bool bloqueado = bloqInt != 0;
    bool possuiIngresso = ingInt != 0;

    if (podeEntrar(idade, bloqueado, possuiIngresso)) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}
