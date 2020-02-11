# include <stdio.h>
 int main (void)
 {
     int a,b;
     printf("正整数:");
     scanf("%d", &a);
     b = 0;
     while (b < a)
     {
        if (a %2 )
        {
          printf("+");
        }
        else
        {
         printf("-");
         }
         a--;
     }
     return 0;
 }