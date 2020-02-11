# include <stdio.h>
int main (void)
{
    int a,b;
    int i, j;
    int height;
    int length;
    printf("让我们画一个长方形\n");
    printf("一边：");
    scanf("%d", &a);
    printf("另一边:");
    scanf("%d", &b);
    length = (a > b) ? a : b;
    height = (a < b) ? a : b;
    for (i = 0; i < height; i++) {
        for (j = 0; j < length; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}