/*
    返回结构体的函数
*/

#include <stdio.h>
/*=== xyz结构体 ===*/
struct xyz {
    int    x;
    long   y;
    double z;
};
/*--- 返回具有{x,y,z}的值的结构体xyz ---*/
struct xyz scan_xyz()
{
    int x;
    long y;
    double z;
    struct xyz temp;
    printf("x=,y=,z=");
    scanf("%d%ld%lf", &x, &y, &z);
    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
    
}
int main(void)
{
    struct xyz s = { 0, 0, 0 };
    s = scan_xyz();
    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);
    return 0;
}