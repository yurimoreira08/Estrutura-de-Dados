//18. Faça um programa que leia várias idades e calcule a média, parando quando o usuário digitar uma idade negativa.
#include <stdio.h>

int main() {
    int idade, qtd = 0, soma = 0;
    float media;

    while(1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if(idade < 0) break;
        soma += idade;
        qtd++;
    }

    if(qtd > 0) {
        media = soma / (float)qtd;
        printf("%.2f\n", media);
    }
}
