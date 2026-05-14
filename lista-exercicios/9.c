#include <stdio.h>

int main() {
    float a, b;
    char operador;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("\nDigite o segundo número: ");
    scanf("%f", &b);

    switch (operador) {

        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;

        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;

        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Resultado: %.2f\n", a / b);
            } else {
                printf("Divisao por zero!\n");
            }
            break;

        default:
            printf("Operador invalido!\n");
    }

    return 0;
}