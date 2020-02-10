#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两个整数\n");
    printf("输入第一个整数：");
    scanf("%d",&a);
    printf("输入第二个整数: ");
    scanf("%d",&b);
    printf("前者是后者的:%.2f%%",(double)a/b*100);
    return 0;
}