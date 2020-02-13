#include <stdio.h>
int cub(int x) {
    return x * x * x;  
}
int main(void) {
    int x;
    printf("请输入一个数:");
    scanf("%d", &x);
    printf("它的立方是%d",cub(x));       
    return 0;
}