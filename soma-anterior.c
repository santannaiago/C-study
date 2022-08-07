#include <stdio.h>

int somar(int valor) {
    if (valor != 0) {
        return valor + somar(valor - 1);
    } else {
        return valor;
    }
}

int main() {
    int n, resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    resultado = somar(n);
    printf("A soma de %d com todos números inteiros positivos anteriores é %d\n\n", n, resultado);
}