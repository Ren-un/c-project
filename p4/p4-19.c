# include <stdio.h>
int main (void)
{
    int i, n;
      int m;
      m = 0; 
      printf("整数值：");
     scanf("%d", &n); 
     for (i = 1; i <= n; i++)
         if (n % i == 0) {
             printf("%d ", i);
             putchar('\n');
             m++;
         }
     printf("约数有%d个。", m);
     return 0;
}