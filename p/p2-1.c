#include<stdio.h>
int main(void)
{
    int a,b;
    printf("输入第一个整数:\n");
    scanf("%d",&a);
    printf("输入第二个整数:\n");
    scanf("%d",&b); 
    printf("第一个数是第二个数的%.2f%%\n",((double)a/b)*100);
    return 0;
}