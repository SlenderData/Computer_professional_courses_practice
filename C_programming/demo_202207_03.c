#include <stdio.h>
void testfun01(void) //判断所输入的三个数，输出最大的一个。
{
    printf("判断所输入的三个数，输出最大的一个。\n");
    int a, b, c;
    printf("请输入第一个数：");
    scanf("%d", &a);
    printf("请输入第二个数：");
    scanf("%d", &b);
    printf("请输入第三个数：");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("最大的数为：%d\n", a);
        }
        else
        {
            printf("最大的数为：%d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("最大的数为：%d\n", b);
        }
        else
        {
            printf("最大的数为：%d\n", c);
        }
    }
}
void testfun02(void) //将所输入的三个数降序输出。
{
    printf("将所输入的三个数降序输出。\n");
    int a, b, c, temp;
    printf("请输入第一个数：");
    scanf("%d", &a);
    printf("请输入第二个数：");
    scanf("%d", &b);
    printf("请输入第三个数：");
    scanf("%d", &c);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("降序排列：%d %d %d\n", a, b, c);
}
void testfun03(void) //输出三角形
{
    int r, s, c, rows;
    printf("请输入需要生成的三角形行数：");
    scanf("%d", &rows);
    for (r = 0; r < rows; r++) //外循环 行数
    {
        for (s = rows - r - 1; s > 0; s--) //内循环1 行前空格
        {
            printf("  ");
        }
        for (c = 0; c < 2 * r + 1; c++) //内循环2 行内星号*
        {
            printf("* ");
        }
        printf("\n");
    }
}
void testfun04(void) //杨辉三角
{
    int rows, i, j, r, c, s;
    printf("请输入需要生成的杨辉三角行数：");
    scanf("%d", &rows);
    int yangHui[rows][rows];
    //在数组内填入数据
    yangHui[0][0] = 1;
    yangHui[1][0] = 1;
    yangHui[1][1] = 1;
    for (i = 2; i < rows; i++)
    {
        yangHui[i][0] = 1;
        for (j = 1; j < i; j++)
        {
            yangHui[i][j] = yangHui[i - 1][j] + yangHui[i - 1][j - 1];
        }
        yangHui[i][i] = 1;
    }
    for (r = 0; r < rows; r++) //输出数组
    {
        for (s = rows; s > r + 1; s--)
        {
            printf("   ");
        }
        for (c = 0; c < r + 1; c++)
        {
            printf("%-6d", yangHui[r][c]);
        }
        printf("\n");
    }
}
void main(void)
{
    testfun04();
}
