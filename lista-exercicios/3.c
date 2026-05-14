#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    printf("Hexadecimal: %X\n", numero);
    printf("Octal: %o\n", numero);

    return 0;
}