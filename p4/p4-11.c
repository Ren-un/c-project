# include <stdio.h>
int main (void)
{
    int a;
    do
    {
        printf("请输入一个正整数");
        scanf("%d",&a);
        if (a <= 0)
        {
          puts("\a请不要输入正整数。");
        }       
    } while (a <= 0);
    int b=a;
    printf("%d逆向显示的结果是",b);
    a /= 10;
    puts(".");
    return 0 ;
}