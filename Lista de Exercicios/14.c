//14. Crie um algoritmo que leia um número inteiro e verifique se ele é primo.
#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        printf("O numero %d e primo\n", n);
    } else {
        printf("O numero %d nao e primo\n", n);
    }

    return 0;
}
