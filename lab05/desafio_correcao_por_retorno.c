#include <stdio.h>

int adicionarUm(int numero) {
    numero++;
    return numero;
}

int main(void) {
    int numero = 5;
    
    printf("Valor original: %d\n", numero);
    numero = adicionarUm(numero);
    printf("Novo valor apos retorno: %d\n", numero);

    return 0;
}
