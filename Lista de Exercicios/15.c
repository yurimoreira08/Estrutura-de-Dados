//15. Faça um programa que leia um número inteiro e calcule o fatorial dele usando o laço for.
#include <stdio.h>

int main() {
    int numero, i;
    int fat = 1;

    printf("Digite um numero e calcule o fatorial: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        fat = fat * i;
    }

    printf("O fatorial de %d e: %d\n", numero, fat);
    return 0;
}
