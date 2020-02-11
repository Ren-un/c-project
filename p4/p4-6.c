# include <stdio.h>
int main (void)
{
    int a,b; 
     printf("请输入一个正整数：");
     scanf("%d", &a);
     b = 0;
     while (b < a) {
         if ((b % 2)==0) {
             printf("%d ", b);
         }
         b++;
     } 
     return 0;
}