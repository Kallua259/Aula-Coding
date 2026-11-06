#include <stdio.h>

int main(void) {
    int n, i = 1, soma = 0;
    printf("Digite N: ");
    scanf("%d", &n);
    while (i <= n) {
        soma += i;
        i++;
    }
    printf("Soma de 1 ate %d = %d\n", n, soma);
    return 0;
}
```[cite: 44]

---

### 2. Média de 5 Notas com While (`media_cinco_notas.c`)[cite: 45]
```c
#include <stdio.h>

int main(void) {
    int contador = 1;
    float nota, soma = 0;
    while (contador <= 5) {
        printf("Nota %d: ", contador);
        scanf("%f", &nota);
        soma += nota;
        contador++;
    }
    printf("Media = %.2f\n", soma / 5.0f);
    return 0;
}
