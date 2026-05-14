#include <stdio.h>

int main() {

    int x1, x2, x3, a, b, y;
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);

    printf("Digite o valor de x2: ");
    scanf("%d", &x2);

    printf("Digite o valor de x3: ");
    scanf("%d", &x3);

    a = x1 + 3;
    b = x2 * x3;

    y = (a * a * a * a) + (b * b* b);
    printf("%d", y);

    return 0;
}