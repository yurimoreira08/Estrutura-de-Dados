//16. Escreva um programa que leia a altura e o peso de uma pessoa e calcule o IMC, mostrando a classificação correspondente.
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Classificacao: Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Classificacao: Obesidade grau 2\n");
    } else {
        printf("Classificacao: Obesidade grau 3\n");
    }

    return 0;
}
