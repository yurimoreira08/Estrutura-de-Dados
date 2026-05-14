#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preco: ");
    scanf("%f", &preco);

    preco = preco * (1 + 0.1 * (preco < 100) + 0.2 * (preco >= 100));

    printf("Novo preco: %.2f\n", preco);

    return 0;
}
