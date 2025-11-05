//12. Desenvolva um algoritmo que leia números até que o usuário digite 0 e mostre a soma deles (use do...while).
#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        soma += num;
    } while (num != 0);

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
