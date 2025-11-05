// 5. Faça um programa que leia a nota de um aluno e mostre se ele foi aprovado (nota >= 6) ou reprovado.
#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6) {
        printf("O aluno tirou %.1f e foi aprovado.", nota);
    } else {
        printf("O aluno tirou %.1f e foi reprovado.", nota);
    }

    return 0;
}