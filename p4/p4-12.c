# include <stdio.h>
int main (void)
{
    int a,b,c;
    c = 0;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    b = a;
    while (a > 0)
    {
        a /=10;
        c++;
    }
    printf("%d的位数是%d",b,c);
    return 0 ;
}