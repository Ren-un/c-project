# include <stdio.h>
int main (void)
{
    int height;
    int i, j;
    printf("生成一个正方形\n");
    printf("正方形有几层：");
    scanf("%d", &height);
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}