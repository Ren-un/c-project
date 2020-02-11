# include <stdio.h>
int main (void)
{
    int no;
      int i;
      printf("整数值:");
      scanf("%d", &no);
      putchar('\n');
     for (i = 1; i <=no; i += 2) {
         printf("%d ", i);
}