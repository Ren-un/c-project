#include <stdio.h>

#define number    80    
int main(void)
{
    int v[number];
    int num;
    int i;
    printf("数据个数:");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("%d号:",i+1);
        scanf("%d", &v[i]);
    }
    printf("{");
    for (i = 0; i < num-1; i++) {
        printf("%d, ", v[i]);
    }
    printf("%d", v[num-1]);
    printf("}");
    return 0;
}