# include<stdio.h>
int main(void)
{
    int a;
    printf("输入一个整数:");
    scanf("%d",&a);
    if (a >= 0)
    {
        printf("其绝对值是：%d",a);
    }
      else
      {
        printf("其绝对值是：%d",-a);
      }
     return 0;
}