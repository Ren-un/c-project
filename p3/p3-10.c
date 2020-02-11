# include <stdio.h>
int main(void)
{
    int a,b,c;
    puts("请输入三个整数：");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
     printf("三个值相等");
    else if (a==b || b==c ||a==c)
    {
     printf("两个值相等");
    }
     else
     {
       printf("三个值各不相同");
     }
     return 0 ;
}