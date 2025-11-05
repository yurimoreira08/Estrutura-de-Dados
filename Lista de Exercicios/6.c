// 6. Escreva um algoritmo que leia um número e mostre a tabuada desse número de 1 a 10 usando o laço for.
#include <stdio.h>

int main() {
    int numero, i;
    printf("Digite o numero para imprimir a tabuada de 1 a 10: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d \n", numero, i, resultado);
    }

    return 0;
}
