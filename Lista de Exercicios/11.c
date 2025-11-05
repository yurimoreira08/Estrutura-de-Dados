//11. Crie um programa que leia um número e mostre todos os seus divisores usando o laço for.
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero e veja todos os seus divisores: ");
    scanf("%d", &numero);

    printf("Divisores de %d:", numero);
    for(int i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            printf("\n%d", i);
        } 
    }

    return 0;
}