#include <stdio.h>
int sumup(int n) {
    int sum = 0;
    while (n-->0)
    {
        sum += n;
    }    
    return sum;
}
int main(void) {
    int x;
    printf("请输入一个数:");
    scanf("%d", &x);
    printf("从1到%d之间所有整数的和是%d",x, sumup(x));       
    return 0;
}