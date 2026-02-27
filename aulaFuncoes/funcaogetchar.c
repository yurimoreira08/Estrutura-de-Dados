#include <stdio.h>

int main()
{
    char c;
    printf("Digite um caractere: ");
    c = getchar();
    printf("O caractere digitado foi: %c\n", c);
    printf("Codigo ASCII do caractere: %d\n", c);

    return 0;
}
