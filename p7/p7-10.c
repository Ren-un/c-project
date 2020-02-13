#include <stdio.h>
int main(void)
{
    float x;
    int i;
    float m = 0.0;
    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("x=%f x=%f\n",m,x);
        m += 0.01;
    }   
    return 0;
}