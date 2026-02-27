#include <stdio.h>

void incrementa1(int *n) {
    *n = *n + 1;
}

void incrementa2(int n) {
    n = n + 1;
}

void Troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}

int main() {
    int numero = 5;
    printf("Antes de incrementar: %d\n", numero);
    incrementa2(numero);
    printf("%d\n", numero);

    incrementa1(&numero);
    printf("%d\n", numero);
    
    return 0;
}
