#include <stdio.h>

int main() {
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;

    pp = &p2;
    printf("Conteudo: %d \n", *(int*)pp);

    return 0;
}