#include <stdio.h>
int sqr(int x) {
    return x * x ;   
}
int main(void) {
    int x;
    printf("请输入一个数:");
    scanf("%d", &x);
    printf("它的四次幂是%d", sqr(sqr(x)));       
    return 0;
}