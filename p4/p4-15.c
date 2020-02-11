# include <stdio.h>
 int main (void)
 {
     int a,b,c,d;
    printf("开始数值(cm)：");
    scanf("%d",&a);
    printf("结束数值（cm):");
    scanf("%d",&b);
    printf("间隔数值（cm）：");
    scanf("%d",&c);
    int X;
    X =a;
    for(d=0;d<=(b-X)/c;d++)
    {
        printf("%dcm\t%.2fkg",a,(a-100)*0.9);
        putchar('\n');
        a += c;
    }
    return 0;
 }