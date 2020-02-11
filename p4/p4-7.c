# include <stdio.h>
int main (void)
{
    int a, b; 
      printf("请输入一个整数:");
      scanf("%d", &a);
      b = 2;
     while (b < a) {
         printf("%d ", b);
         b *= 2;
     }
     putchar('\n');
     return 0;
}