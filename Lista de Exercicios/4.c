// 4. Escreva um programa que leia a idade de uma pessoa e informe se ela é menor de idade, adulta ou idosa.
#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("A pessoa e menor de idade.");
    } else if (idade >= 60) {
        printf("A pessoa e idosa.");
    } else {
        printf("A pessoa e adulta.");
    }

    return 0;
}