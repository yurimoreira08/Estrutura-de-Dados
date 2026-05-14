#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    printf("Digite o 1º lado do triângulo: ");
    scanf("%d", &ladoA);

    printf("Digite o 2º lado do triângulo: ");
    scanf("%d", &ladoB);

    printf("Digite o 3º lado do triângulo: ");
    scanf("%d", &ladoC);

    if (ladoA + ladoB > ladoC &&
        ladoA + ladoC > ladoB &&
        ladoB + ladoC > ladoA) {

        if (ladoA == ladoB && ladoB == ladoC) {
            printf("O triângulo é equilátero.\n");
        } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }

    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}