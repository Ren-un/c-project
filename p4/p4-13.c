# include <stdio.h>
 int main (void)
 {
     int a,b,c;
     c = 0;
     printf("a的值：");
     scanf("%d",&a);
     for ( b = 0; b <=a; b++)
     {
        c +=b;
     }
     printf("1到%d的和为%d",b-1,c);
     return 0 ;
 }