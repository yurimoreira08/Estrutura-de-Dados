// 3. Desenvolva um algoritmo que leia um número inteiro e verifique se ele é par ou ímpar.
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e par", numero);
    } else {
        printf("O numero %d e impar", numero);
    }

    return 0;
}