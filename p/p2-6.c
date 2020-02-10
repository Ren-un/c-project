#include<stdio.h>
int main(void)
{
    int a;
    printf("请输入你的身高(cm):");
    scanf("%d",&a);
    printf("您的标准体重是：%2.1fKg",(a-100)*0.9);
    return 0;
}