#include <stdio.h>

int test1() // 输出菱形
{
    int r, s, c;
    for (r = 0; r < 4; r++) // 上半部分三角形
    {
        for (s = 4 - r - 1; s > 0; s--)
        {
            printf("  ");
        }
        for (c = 0; c < 2 * r + 1; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (r = 3; r > 0; r--) // 下半部分三角形
    {
        for (s = 3 - r + 1; s > 0; s--)
        {
            printf("  ");
        }
        for (c = 0; c < 2 * r - 1; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// 函数练习

float avgfloat(float x, float y)  // 输出两个浮点数的平均值
{
    float avg;
    avg = (x + y) / 2;
    return avg;
}

int test2()  // 调用上面的求平均值函数
{
    float a, b;
    printf("请输入两个浮点数: ");
    scanf("%f %f", &a, &b);
    printf("两个浮点数的平均值为%f\n", avgfloat(a, b));
}

int main()
{
    test2();
    return 0;
}