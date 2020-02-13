/*
    求6名学生在两次考试中1门课程的总分并显示
*/

#include <stdio.h>
int main(void)
{
    int i, j;
    double x,y;
    x=y= 0;
    int tensu1[6][1];
    int tensu2[6][1];
    int sum[6][1];            /* 总分 */
    puts("请依次输入语文和数学的成绩，用空格分隔");
    puts("输入分数：");
    puts("语文:");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++) {
            scanf("%d", &tensu1[i][j]);
        }

    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++) {
            printf("%6d\t", tensu1[i][j]);
            x += tensu1[i][j];
        }
    }
    putchar('\n');
    printf("语文的总分是%.2f,平均分是:%.2f",x,x/6);
    putchar('\n');
    puts("数学:");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++) {
            scanf("%d", &tensu2[i][j]);
        }
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++) {
            printf("%6d\t", tensu2[i][j]);
            y += tensu2[i][j];
        }
    }
    putchar('\n');
    printf("数学的总分是%.2f平均分是:%.2f",y, y / 6);
    /* 求两次考试的分数之和 */
    for (i = 0; i < 6; i++) {                            
        for (j = 0; j < 1; j++)                            
            sum[i][j] = tensu1[i][j] + tensu2[i][j];    
    }
    putchar('\n');
    /* 显示总分 */
    puts("总分");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++)
            printf("%6d\t", sum[i][j]);
    }
    putchar('\n');
    puts("平均分");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 1; j++)
            printf("%.2f\t", (double)sum[i][j]/2);
    }
    return 0;
}