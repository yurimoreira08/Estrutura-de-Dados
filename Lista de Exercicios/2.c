// 2. Crie um programa que leia três números e determine qual é o maior entre eles.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("O maior numero e %d", a);
    } else if (b > c) {
        printf("O maior numero e %d", b);
    } else {
        printf("O maior numero e %d", c);
    }

    return 0;
}