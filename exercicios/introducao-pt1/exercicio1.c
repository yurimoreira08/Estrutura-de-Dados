#include <stdio.h>

int main() {

    int x = 10, y = 10, z = 10;
    int r;

    r = (x * x * x) + (y * y) + (x * y * z);
    printf("%d", r);

    return 0;
}