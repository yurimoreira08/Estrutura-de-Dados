#include <stdio.h>

int main() {
    struct aluno {
        int numero;
        float nota1;
        float nota2;
        float media;
    };

    struct aluno alunos[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].numero);
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
    }

    for(int i = 0; i < 10; i++) {
        printf("Aluno numero: %d", alunos[i].numero);
        printf("Nota 1: %.2f", alunos[i].nota1);
        printf("Nota 2: %.2f", alunos[i].nota2);
        printf("Media do aluno: %.2f\n", alunos[i].media);
    }

    printf("\n");

    return 0;
}