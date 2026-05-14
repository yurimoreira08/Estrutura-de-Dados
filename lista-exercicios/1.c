#include <stdio.h>

int main() {
    float metros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    printf("Decímetros %f\n", metros * 10);
    printf("Centímetros %f\n", metros * 100);
    printf("Milímetros %f\n", metros * 1000);

    return 0;
}