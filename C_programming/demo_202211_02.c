#include <stdio.h>
#define PI 3.14

int test1()
{
    float r, s;
    printf("请输入圆的半径: ");
    scanf("%f", &r);
    s = PI * r * r;
    printf("半径为 %.2f 的圆的面积为 %.2f", r, s);
}

int main()
{
    test1();
    return 0;
}
