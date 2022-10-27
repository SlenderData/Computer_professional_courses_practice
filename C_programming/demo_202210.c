#include <stdio.h>

int test1()
{
    int x = 1, y = 0, a = 0, b = 0;
    switch (x)
    {
    case 1:
        switch (y)
        {
        case 0:
            a++;
            break;
        case 1:
            b++;
            break;
        }
    case 2:
        a++;
        b++;
        break;
    case 3:
        a = a + 2;
        b++;
    }
    printf("\na=%d, b=%d", a, b);
}

int test2()
{
    int button;
    printf("1------>cocacola\n");
    printf("2------>spirte\n");
    printf("3------>fanta\n");
    printf("4------>pepsicola\n");
    scanf("%d", &button);
    switch (button)
    {
    case 1:
        printf("It's cocacola!\n");
        break;
    case 2:
        printf("It's sprite!\n");
        break;
    case 3:
        printf("It's fanta!\n");
        break;
    case 4:
        printf("It's pepsicola!\n");
        break;
    default:
        printf("Input error!\n");
        break;
    }
}

int test3()
{
    int score, grade;
    printf("Please input the student's score: ");
    scanf("%d", &score);
    grade = score / 10;
    switch (score)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Grade D\n");
        break;
    case 6:
        printf("Grade C\n");
        break;
    case 7:
    case 8:
        printf("Grade B\n");
        break;
    case 9:
    case 10:
        printf("Grade A\n");
        break;
    default:
        printf("Input error!\n");
        break;
    }
}

int test4()
{
    int i = 1, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i += 1;
    }
    printf("1+2+3+...+99+100=%d\n", sum);
}

int test5()
{
    int i = 2, sum = 0;
    while (i <= 88)
    {
        sum = sum + i;
        i += 2;
    }
    printf("2+6+8+...+86+88=%d\n", sum);
}

int test6()
{
    int n, n0, factorial = 1;
    printf("Please input a number: ");
    scanf("%d", &n);
    n0 = n;
    while (n > 0)
    {
        factorial = factorial * n;
        n -= 1;
    }
    printf("%d!=%d\n", n0, factorial);
}

int test7()
{
    int month;
    printf("Please input a number between 1 and 12: ");
    scanf("%d", &month);
    switch (month)
    {
    case 3:
    case 4:
    case 5:
        printf("Month %d is spring.\n", month);
        break;
    case 6:
    case 7:
    case 8:
        printf("Month %d is summer.\n", month);
        break;
    case 9:
    case 10:
    case 11:
        printf("Month %d is autumn.\n", month);
        break;
    case 12:
    case 1:
    case 2:
        printf("Month %d is winter.\n", month);
        break;
    default:
        printf("Input error!\n");
    }
}

int test8()
{
    int n, n0, factorial = 1;
    printf("Please input a number: ");
    scanf("%d", &n);
    n0 = n;
    for (; n >= 1; n--)
    {
        factorial = factorial * n;
    }
    printf("%d!=%d\n", n0, factorial);
}

int test9()
{
    double sum = 1, i, j = 1;
    for (i = 1; i <= 63; i++)
    {
        j = j * 2;
        sum = sum + j;
    }
    printf("%e\n", sum);
}

int test10()
{
    int a = 1, b = 1, c, i;
    printf("%-10d", a);
    printf("%-10d", b);
    for (i = 3; i <= 40; i++)
    {
        if (i % 8 == 1)
            printf("\n");
        c = a + b;
        printf("%-10d", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int test11()
{
    int n, i, flag = 1;
    printf("Please input a number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%d is a prime.\n", n);
    else
        printf("%d is not a prime.\n", n);
}

int test12()
{
    int i, a, flag = 0;
    printf("Please input: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a);
        if (a % 5 == 0)
        {
            flag = a;
            break;
        }
    }
    if (flag)
        printf("%d\n", flag);
    else
        printf("Not exists\n");
}

int test13()
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        j = 1;
        while (j < 10)
        {
            printf((j == 9) ? "%4d\n" : "%4d", i * j);
            j++;
        }
    }
}

int test14()
{
    int i, j, n;
    printf("Please input: n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%3d", j);
        printf("\n");
    }
}

int test15()
{
    int n, i;
    float sum = 0, t = 0;
    printf("Please input: n = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t = t + i;
        sum = sum + (1 / t);
    }
    printf("sum = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n) = %f\n", sum);
}

int test16() // 判断 100～200 之间素数的个数
{
    int n, i, count = 0, flag;
    for (n = 100; n <= 200; n++)
    {
        flag = 1;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            count += 1;
    }
    printf("100~200 之间素数的总数为 %d\n", count);
}

// 数组

int test17() // 10位评委打分，打分范围为1～100,去掉最高分和最低分，输出其余8个的平均值
{
    int sum = 0, min = 100, max = 1, i, a[10] = {0};
    float avg;
    printf("请分别输入10位评委的打分: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
        sum = sum + a[i];
    }
    avg = (sum - min - max) / 8;
    printf("去掉最高分和最低分后，选手的最终平均得分为: %.1f\n", avg);
}

int test18() // 输入10个数，输出最大值、最小值、总合和平均值
{
    int max, min, sum = 0, a[10], i;
    float avg;
    printf("请输入10个数: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        if (i == 0)
        {
            max = a[i];
            min = a[i];
        }
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    avg = sum / 10;
    printf("最大值为%d, 最小值为%d, 总合%d, 平均值%.2f。\n", max, min, sum, avg);
}

int test19() // 输出 100-999 之间的水仙花数
{
    int num, i, j, k;
    printf("100-999之间的水仙花数有: ");
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                num = i * 100 + j * 10 + k;
                if ((i * i * i + j * j * j + k * k * k) == num)
                    printf("%4d", num);
            }
        }
    }
    printf("\n");
}

int main()
{
    test19();
    return 0;
}
