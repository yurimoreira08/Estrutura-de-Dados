//10. Escreva um programa que leia uma senha e repita a solicitação até que a senha correta seja digitada (use while).
#include <stdio.h>

int main() {
    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 8080) {
        printf("A senha esta incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }
    printf("A senha esta correta! \n");

    return 0;
}