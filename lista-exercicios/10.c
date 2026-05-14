#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int entrada, saida, totalMinutos;
    int horas;
    float valor = 0;

    printf("Hora e minuto de entrada: ");
    scanf("%d %d", &h1, &m1);

    printf("Hora e minuto de saida: ");
    scanf("%d %d", &h2, &m2);

    entrada = h1 * 60 + m1;
    saida = h2 * 60 + m2;

    if (saida < entrada) {
        saida += 24 * 60;
    }

    totalMinutos = saida - entrada;

    horas = totalMinutos / 60;

    if (totalMinutos % 60 != 0) {
        horas++;
    }

    for (int i = 1; i <= horas; i++) {

        if (i <= 2) {
            valor += 1.0;
        } else if (i <= 4) {
            valor += 1.4;
        } else {
            valor += 2.0;
        }
    }

    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}