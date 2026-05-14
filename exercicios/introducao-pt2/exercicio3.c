#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 0){
        printf("Idade inválida");
    } else if (idade <= 4) {
        printf("É um bebê.");
    } else if (idade <= 12) {
        printf("É uma criança.");
    } else if (idade <= 21) {
        printf("É um adolescente.");
    } else if (idade <= 60) {
        printf("É um adulto.");
    } else {
        printf("É um idoso.");
    }

    return 0;
}