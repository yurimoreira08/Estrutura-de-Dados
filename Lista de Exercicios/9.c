//9. Faça um algoritmo que calcule a soma dos números de 1 a 100 usando o laço for.
#include <stdio.h>

int main() {
    int i, s = 0;
    for(i = 1; i <= 100; i++) {
        s += i;
    }
    printf("A soma dos numeros e %d \n", s);

    return 0;
}
