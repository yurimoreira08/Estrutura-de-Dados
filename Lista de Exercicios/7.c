// 7. Desenvolva um programa que leia 10 números e conte quantos são pares e quantos são ímpares.
#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("Quantidade de numeros pares: %d \n", pares);
    printf("Quantidade de numeros impares: %d", impares);

    return 0;
}