#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, A[5] = {8, 16, 24, 32, 40};
    int maior = A[0];

    for(i = 1; i < 5; i++) {
        if(maior < A[i]) {
            maior = A[i];
        }
    }
    printf("Maior %d", maior);

    return 0;
}
