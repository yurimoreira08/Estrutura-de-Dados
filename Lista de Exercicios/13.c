//13. Escreva um programa que leia 5 números e exiba o maior e o menor entre eles.
#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > maior) maior = num;
    if (num < menor) menor = num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > maior) maior = num;
    if (num < menor) menor = num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > maior) maior = num;
    if (num < menor) menor = num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > maior) maior = num;
    if (num < menor) menor = num;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    
    return 0;
}
