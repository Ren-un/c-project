#include <math.h>
#include <stdio.h>
#define sqr(n)  ((n) * (n))
typedef struct {
    double x;    /* X坐标 */
    double y;    /* Y坐标 */
} Point;
typedef struct {
    Point  pt;        /* 当前位置 */
    double fuel;    /* 剩余燃料 */
} Car;
double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}
void put_info(Car c)
{
    printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("剩余燃料：%.2f升\n", c.fuel);
}
int move(Car* c, Point dest)
{
    double d = distance_of(c->pt, dest);    /* 行驶距离 */
    if (d > c->fuel)                        /* 行驶距离超过了燃料 */
        return 0;                            /* 无法行驶 */
    c->pt = dest;        /* 更新当前位置（向dest移动） */
    c->fuel -= d;        /* 更新燃料（减去行驶距离d所消耗的燃料） */
    return 1;                                /* 成功行驶 */
}
int main(void)
{
    Car mycar = { { 0.0, 0.0 }, 90.0 };
    int move_method;
    double x_distance;
    double y_distance;
    while (1) {
        int select;
        Point dest;            /* 目的地的坐标 */
        put_info(mycar);    /* 显示当前位置和剩余燃料 */
        printf("开动汽车吗【Yes···1 / No···0】：");
        scanf("%d", &select);
        if (select != 1) break;
        printf("两种方法,1输入目的地,2输入X方向和Y方向的行驶距离:");
        scanf("%d", &move_method);
        switch (move_method)
        {
        case 1:
            printf("目的地的X坐标：");  scanf("%lf", &dest.x);
            printf("        Y坐标：");  scanf("%lf", &dest.y);
            break;
        case 2:
            printf("X方向行驶距离："); scanf("%lf", &x_distance);
            printf("Y方向行驶距离："); scanf("%lf", &y_distance);
            dest.x = x_distance + mycar.pt.x;
            dest.y = y_distance + mycar.pt.y;
            break;
        }
        if (!move(&mycar, dest))
            puts("\a燃料不足无法行驶。");
    }
    return 0;
}