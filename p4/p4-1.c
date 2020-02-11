#include <stdio.h>
int main(void)
{
 int no;
     int a;
     do{
    printf("请输入一个整数：");
     scanf("%d", &no);
     if (no == 0)
         puts("该整数为0。");
     else if (no > 0)
         puts("该整数为正数。");
     else
        puts("该整数为负数。");
     printf("要重复一次吗？【yes···0/No···9】：");
     scanf("%d", &a);
     } while (a == 0);
     return 0;
 }    
 