#include <stdio.h>

int test1()
{
    int m = 32, n = 64, sum;
    sum = m + n;
    printf("sum=%d\n", sum);
    return 0;
}

int test2()
{
    printf("\101 \x42 C\n");
    printf("I say: \"How are you?\"\n");
    printf("\\C Program\\\n");
    printf("Turbo \'C\'\n");
    return 0;
}

int test3()
{
    int a, b;
    int sum;
    printf("请输入2个整数: ");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
    sum = a + b;
    printf("求和的结果为：%d", sum);
    return 0;
}

int test4()
{
    int x, y = 7;
    float z = 4.0;
    x = (y = y + 6, y / z);
    printf("x=%d\n", x);
    return 0;
}

int test5()
{
    int c, d;
    c = 10 | 5;
    d = 10 + 5;
    printf("%d,%d\n", c, d);
}

int test6()
{
    int i, c;
    i = 1;
    c = 'A';
    printf("%d,%c", i, c);
}

int test7()
{
    int a, b, c = 241;
    a = c / 100 % 9;
    b = (-1) && (-1);
    printf("%d,%d\n", a, b);
}

int test8()
{
    int a = 5, b = 6, c = 7, d = 8, m = 2, n = 2;
    (m = a > b) && (n = c < d);
    printf("%d", n);
}

int test9()
{
    int a = 8, b;
    b = (a >> 2) % 2;
    printf("%d,%d", a, b);
}

int test10()
{
    int a;
    a = (int)1.99 * 3;
    printf("%d\n", a);
}

int test11()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}

int test12()
{
    char c1, c2, c3;
    scanf("%c%c%c", &c1, &c2, &c3);
    printf("c1=\"%c\", c2=\"%c\", c3=\"%c\"\n", c1, c2, c3);
    return 0;
}

int test13()
{
    int a;
    char b;
    float c;
    scanf("%d%c%f", &a, &b, &c);
    printf("%d %c %f\n", a, b, c);
    return 0;
}

int test14()
{
    float area, length, width;
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("length=%.2f, width=%.2f\n", length, width);
    printf("The area is %.2f.\n", area);
    return 0;
}

int test15()
{
    int a, b, min;
    scanf("%d %d", &a, &b);
    if (a > b)
        min = b;
    else
        min = a;
    printf("min=%d\n", min);
    return 0;
}

int test16()
{
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (c > max)
    {
        max = c;
    }
    else
    {
        if (c < min)
        {
            min = c;
        }
    }
    printf("max=%d min=%d\n", max, min);
}

int main()
{
    test16();
    return 0;
}
