// 1. Escreva um programa em C que leia um número e verifique se ele é positivo, negativo ou zero.
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero != 0) {
        if (numero > 0) {
            printf("O numero %d e positivo.", numero);
        } else if (numero < 0) {
            printf("O numero %d e negativo.", numero);
        }
    } else {
        printf("O numero e zero.");
    }

    return 0;
}
