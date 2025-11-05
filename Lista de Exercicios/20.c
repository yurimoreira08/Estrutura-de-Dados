//20. Escreva um programa que leia 10 números e mostre quantos deles estão entre 10 e 50.
#include <stdio.h>

int main() {
    int numero, i, cont = 0;

    for(i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero >= 10 && numero <= 50) {
            cont++;
        }
    }

    printf("Total entre 10 e 50: %d\n", cont);

    return 0;
}
