#include <stdio.h>

void letraA() {
    double f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &f);

    c = (f - 32.0) * (5.0 / 9.0);

    printf("Celsius: %.2lf\n", c);
}

void letraB() {
    int f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &f);

    c = (f - 32) * (5 / 9);

    printf("Celsius: %d\n", c);
}


int main() {
    letraA();
    letraB();

    return 0;
}