#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int i, j, soma = 0;

    printf("Digite os elementos da matriz: \n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    for(i = 0; i < 3; i++) 
        for(j = 0; j < 3; j++) 
            soma += matriz[i][j];
    printf("Soma = %d\n", soma);

    return 0;
}
