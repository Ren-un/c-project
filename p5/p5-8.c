/*
    输入学生的分数并显示出分布情况
*/

#include <stdio.h>
#define NUMBER    80        /* 人数上限 */
int main(void)
{
    int i, j;
    int num;                /* 实际的人数 */
    int tensu[NUMBER];        /* 学生的分数 */
    int bunpu[11] = { 0 };    /* 分布图 */
    printf("请输入学生人数：");
    scanf("%d", &num);
    printf("请输入%d 人的分数。\n", num);
    for (i = 0; i < num; i++) {
        printf("%2d号：", i + 1);
        scanf("%d", &tensu[i]);
        bunpu[tensu[i] / 10]++;
    }
    puts("\n---分布图---");
    for (i = 0; i <= 9; i++) {                /* 不到100分 */
        printf("%3d - %3d：", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }
    printf("      100：");
    for (j = 0; j < bunpu[10]; j++)            /* 100分 */
        putchar('*');
    putchar('\n');
    return 0;
}