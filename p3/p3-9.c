# include <stdio.h>
 int main(void)
 {
     int a,b,c,min1,min2;
     puts("请输入三个整数：");
     scanf("%d%d%d",&a,&b,&c);
     min1 = (a < b) ? a : b;
     min2 = (c < b) ? c: b;
     printf("最小值是:%d", (min1 < min2) ? min1 : min2);
 
 }