// 8. Crie um programa que leia um número inteiro e exiba todos os números de 1 até ele usando o laço while.
#include <stdio.h>

int main() {
    int numero, i = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (i <= numero) {
        printf("%d \n", i);
        i++;
    }
    
    return 0;
}
