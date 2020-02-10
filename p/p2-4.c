#include <stdio.h>
int main(void)
{
    int a1,a2,a3,a4;
    double b1,b2,b3,b4;
    a1=7 * 2;
    a4=7 / 2.0;
    a2=7.0 + 2.0;
    a3=7.0 - 2;

    b1=7 * 2;
    b2=7 / 2.0;
    b3=7.0 + 2;
    b4=7.0 - 2.0;

    printf("a1 = %d\n",a1);
    printf("a2 = %d\n",a2);
    printf("a3 = %d\n",a3);
    printf("a4 = %d\n",a4);

    printf("b1 = %f\n",b1);
    printf("b2 = %f\n",b2);
    printf("b3 = %f\n",b3);
    printf("b4 = %f\n",b4);

    return 0;
}