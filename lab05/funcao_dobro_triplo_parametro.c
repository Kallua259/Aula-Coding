#include <stdio.h>

void mostrarDobro(int numero) {
    printf("Dobro: %d\n", numero * 2);
}

void mostrarTriplo(int numero) {
    printf("Triplo: %d\n", numero * 3);
}

int main(void) {
    mostrarDobro(10);
    mostrarTriplo(10);
    
    mostrarDobro(7);
    mostrarTriplo(7);
    
    mostrarDobro(4);
    mostrarTriplo(4);
    
    return 0;
}
