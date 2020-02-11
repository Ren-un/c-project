# include <stdio.h>
int main (void)
{
    int a; 
     printf("正整数");
     scanf("%d", &a);
     while (a-- > 0) {
     putchar('*');             }
     if (a == -1)
     putchar('\n');
     return 0;
}