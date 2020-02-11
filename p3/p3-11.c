# include <stdio.h>
int main(void)
{
    int a,b;
    puts("输入两个整数:");
    scanf("%d%d",&a,&b);
    if (a>b && a-b<=10)
    printf("它们的差小于等于10");
    else if(a<b && b-a<=10)
    printf("它们的差小于等于10");
    else
    {
        printf("它们的差大于等于10");
    }
    return 0;
}