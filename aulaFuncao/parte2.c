#include <stdio.h>

void imprimeArray(int *arr, int tamanho) {
    int i;
    for(i = 0; i < tamanho; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    imprimeArray(numeros, tamanho);

    return 0;
}