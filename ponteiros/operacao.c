#include <stdio.h>

int main() {

    int *p;
    int c = 10;
    p = &c;

    
    (*p) ++;
    printf("C: %d \n", c);
    *p = (*p) * 10;
    printf("P: %d \n", *p);
    printf("C: %d", c);

    return 0;
}