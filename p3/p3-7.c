# include <stdio.h>
int main (void)
{
    int a,b,c,d,max;
    puts("请输入四个整数：");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=a;
    if (b > max) max = b;  
    if (c > max) max = c;
    if (d > max) max = d;
    printf("最大值是:%d",max);
    return 0;
}