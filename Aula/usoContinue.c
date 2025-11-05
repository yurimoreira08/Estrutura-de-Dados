#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    while (a <= b)
    {
        a += 1;
        if (a == 5)
            goto fim;
        printf("%d \n", a);
    }
fim:
    printf("O programa acabou.");
    return 0;
}