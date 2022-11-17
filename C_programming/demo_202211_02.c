#include <stdio.h>
#define PI 3.14

int test1()
{
    float r, s;
    printf("请输入圆的半径: ");
    scanf("%f", &r);
    s = PI * r * r;
    printf("半径为 %.2f 的圆的面积为 %.2f\n", r, s);
}

int test2()
{
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    if (num % 3 == 0)
        printf("TRI\n");
    if (num % 5 == 0)
        printf("FIVE\n");
}

int test3()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, i, count = 0;
    for (i = 0; i < 12; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i < 12; i++)
    {
        count = count + 1;
        printf("%5d", a[i]);
        if (count % 4 == 0)
            printf("\n");
    }
}

int test3_1()
{
    int i;
    for (i = 1; i <= 12; i++)
    {
        printf("%d\n", i);
    }
    for (i = 1; i <= 12; i++)
    {
        printf("%5d", i);
        if (i % 4 == 0)
            printf("\n");
    }
}

int test4()
{
    double money = 10000;
    int i;
    for (i = 0; i < 60; i++)
    {
        money = money * 1.25;
    }
    printf("%.2lf\n", money);
}

int main()
{
    test3_1();
    return 0;
}
