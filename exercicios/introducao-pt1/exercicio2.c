#include <stdio.h>

void resto(){
    int resto = 100000 % 13;
    printf("Resto: %d\n", resto);
}

void expressao() {
    float a = 10, b = 10, c = 10, d = 10, e = 10;
    float r;

    r = (a * a * a) * (((b + c) / d) + e);

    printf("Resultado: %.0f", r);
}

int main() {

    resto();
    expressao();

    return 0;
}