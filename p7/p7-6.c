#include <stdio.h>
int main() {
    unsigned a = 0;
    while (++a > 0);
        printf("%u", a - 1);
        putchar('\n');
        printf("%u", a);
}