//19. Desenvolva um algoritmo que leia um número N e mostre os N primeiros números da sequência de Fibonacci.
#include <stdio.h>

int main() {
    int numero, i, a = 0, b = 1, temp;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i = 0; i < numero; i++) {
        printf("%d\n", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}
