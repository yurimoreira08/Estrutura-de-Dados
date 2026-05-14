#include <stdio.h>

int main() {
    float a, b;
    float somaQuadrados;
    float raiz = 0;
    float seno;
    float modulo;

    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);

    printf("Soma: %.2f\n", a + b);

    printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", a * (b * b));

    printf("Quadrado do primeiro: %.2f\n", a * a);

    somaQuadrados = (a * a) + (b * b);
    raiz = somaQuadrados / 2;

    for (int i = 0; i < 10; i++) {
        raiz = (raiz + somaQuadrados / raiz) / 2;
    }

    printf("Raiz da soma dos quadrados: %.2f\n", raiz);

    seno = a - b;
    printf("Seno da diferenca: %.2f\n", seno);

    if (a < 0) {
        modulo = -a;
    } else {
        modulo = a;
    }

    printf("Modulo do primeiro numero: %.2f\n", modulo);

    return 0;
}