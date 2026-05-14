#include <stdio.h>

int main() {
    int diaSemana;

    printf("Digite de 1 a 7 para retornar o dia da semana equivalente ao número: ");
    scanf("%d", &diaSemana);

    switch (diaSemana) {
        case 1:
            printf("O dia da semana é Domingo!");
        break;
        case 2:
            printf("O dia da semana é Segunda-Feira!");
        break;
        case 3:
            printf("O dia da semana é Terça-Feira!");
        break;
        case 4:
            printf("O dia da semana é Quarta-Feira!");
        break;
        case 5:
            printf("O dia da semana é Quinta-Feira!");
        break;
        case 6:
            printf("O dia da semana é Sexta-Feira!");
        break;
        case 7:
            printf("O dia da semana é Sábado!");
        break;
        default:
            printf("Número inválido.");
        break;
    }

    return 0;
}