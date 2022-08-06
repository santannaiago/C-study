#include <stdio.h>

int fatorialAux(int n, int parcial) {
    if (n != 1) {
        return fatorialAux(n - 1, parcial * n);
    } else {
        return parcial;
    }
}

int fatorialCalda(int n) {
    return fatorialAux(n, 1);
}

int main () {
    int n, resultado;
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorialCalda(n);
    printf("\nResultado do fatorial = %d\n\n", resultado);
    return 0;
}