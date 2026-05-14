#include <stdio.h>

int main() {
    for(int i = 0; i <= 127; i++) {
        printf("Decimal: %d | Hexa: %X | Caractere: %c\n", i, i, i);
    }

    return 0;
}