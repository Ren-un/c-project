# include <stdio.h>
int main (void)
{
    int a,b;
    printf("请输入一个整数：");
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    {
        printf("%d",b%10);
    }
    return 0 ;
}