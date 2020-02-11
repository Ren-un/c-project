#include<stdio.h>
int main (void)
{
    int n;
     printf("n的值是:");
      scanf("%d",&n);
      int i;
      for (i = 1; i <= n; i++) {
      printf("%d的二次方是%d",i,i*i);
      putchar('\n');
}