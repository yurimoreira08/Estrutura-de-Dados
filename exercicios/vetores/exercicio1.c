#include <stdio.h>

int main() {
    int n;
    int u[100], v[100], resultado[100];

    printf("Digite o tamanho dos vetores (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    // Lendo vetor u
    for (int i = 0; i < n; i++) {
        printf("Digite u[%d]: ", i);
        scanf("%d", &u[i]);
    }

    // Lendo vetor v
    for (int i = 0; i < n; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    // Produto de Hadamard
    for (int i = 0; i < n; i++) {
        resultado[i] = u[i] * v[i];
    }

    // Imprimindo resultado
    printf("\nResultado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}