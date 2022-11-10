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

float avgfloat(float x, float y) // 输出两个浮点数的平均值
{
    float avg;
    avg = (x + y) / 2;
    return avg;
}

int test2() // 调用上面的求平均值函数
{
    float a, b;
    printf("请输入两个浮点数: ");
    scanf("%f %f", &a, &b);
    printf("两个浮点数的平均值为%f\n", avgfloat(a, b));
}

char change(char x) // 用函数调用完成小写字母转大写字母
{
    x = x - 32;
    return x;
}

int test3() //调用上面的转换函数
{
    char a;
    do
    {
        printf("请输入一个小写字母: ");
        scanf("%c", &a);
        if (a < 'a' || a > 'z')
        {
            printf("输入有误, 请重新输入!\n");
        }
        else
        {
            printf("输入正确!\n");
        }
    } while (a < 'a' || a > 'z');
    printf("%c 转换为大写字母后为 %c\n", a, change(a));
}

int main()
{
    test3();
    return 0;
}