#include <stdio.h>

int main() {
    int usuarioValido = 1;
    int senhaCorreta = 0;

    if (usuarioValido) {
        if (senhaCorreta) {
            printf("Login realizado\n");
        } else {
            printf("Senha incorreta\n");
        }
    } else {
        printf("Usuario inexistente\n");
    }

    return 0;
}
