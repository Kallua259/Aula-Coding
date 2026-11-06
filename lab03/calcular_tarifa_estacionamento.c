#include <stdio.h>

int main(void) {
    int horas, tipo;
    double base, desc, final;
    printf("Horas: "); scanf("%d", &horas);
    printf("Tipo (1-Comum, 2-VIP): "); scanf("%d", &tipo);
    if (horas <= 0 || (tipo != 1 && tipo != 2)) {
        printf("Dados invalidos!\n"); return 1;
    }
    if (horas <= 1) base = 5.0;
    else if (horas <= 3) base = 10.0;
    else base = 15.0;
    desc = (tipo == 2) ? base * 0.20 : 0.0;
    final = base - desc;
    printf("Base: R$ %.2f | Desc: R$ %.2f | Final: R$ %.2f\n", base, desc, final);
    return 0;
}
