#include <stdio.h>

int main() {
    int dia, mes, ano;
    int bissexto = 0;
    int dataValida = 1;

    printf("Digite o dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano > 2008 || ano <= 0) {
        dataValida = 0;
    }

    if (mes < 1 || mes > 12) {
        dataValida = 0;
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    if (dia <= 0) {
        dataValida = 0;
    } else {

        if (mes == 2) {

            if (bissexto) {

                if (dia > 29) {
                    dataValida = 0;
                }

            } else {

                if (dia > 28) {
                    dataValida = 0;
                }
            }

        } else if (
            mes == 4 ||
            mes == 6 ||
            mes == 9 ||
            mes == 11
        ) {

            if (dia > 30) {
                dataValida = 0;
            }

        } else {

            if (dia > 31) {
                dataValida = 0;
            }
        }
    }

    if (dataValida) {
        printf("data valida\n");
    } else {
        printf("data invalida\n");
    }

    return 0;
}