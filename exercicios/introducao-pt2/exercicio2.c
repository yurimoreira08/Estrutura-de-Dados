#include <stdio.h>

int main() {
    int valor1, valor2, valor3, maior;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor1);

    printf("Digite o 2º valor: ");
    scanf("%d", &valor2);

    printf("Digite o 3º valor: ");
    scanf("%d", &valor3);
    
    
    maior = valor1;

    if (valor2 > maior) maior = valor2;
    if (valor3 > maior) maior = valor3;

    printf("O número %d é o maior", maior);

    return 0;
}