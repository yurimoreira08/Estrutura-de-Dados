#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    if (a < b) {

        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }

    } else if (a > b) {

        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }

    } else {
        printf("Valores iguais");
    }

    return 0;
}