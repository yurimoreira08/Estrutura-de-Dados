//17. Crie um algoritmo que mostre todos os números pares de 1 a 50 usando o laço while.
#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 50) {
        if(i % 2 == 0) printf("%d\n", i);
        i++;
    }

    return 0;
}
