# include <stdio.h>
int main (void)
{
    int a,b,c,min;
    puts("请输入三个整数");
    scanf("%d%d%d",&a,&b,&c);
    min = a;                
    if (c < min) min = c;
    if (b < min) min = b;  
    printf("最小的值是%d。\n", min);
    return  0;
    }