#include <stdio.h>
#include<math.h>
unsigned lrotate(unsigned x,int n){
    x <<=n;
    return x;
}
int main() {
    unsigned int number;
    int x;
    printf("请输入初始值:");
    scanf("%d", &number);
    printf("左移多少位:");
    scanf("%d", &x);
    printf("左移后的值:%d", lrotate(number, x));
}