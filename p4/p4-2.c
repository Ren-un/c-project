# include <stdio.h>
int main (void)
{
     int a,b,c;
      int sum = 0;
      puts("请输入两个整数。");
    printf("整数a:"); scanf("%d", &a);
     printf("整数b:"); scanf("%d", &b);
     c=a;
     do {
         sum+=c;
         c--;
     } while (c!=b-1);
     printf("大于等于%d小于等于%d的所有整数的和是%d",b,a,sum);
     return 0;
}