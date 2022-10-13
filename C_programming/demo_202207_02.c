#include <stdio.h>
#define TEMPVALUE 800
void testfun01(void) //测试函数
{
    /*
    这是一个多行注释
    噗哩噗哩噜噜噜
    */
    printf("我是testfun01()函数!\n");
}
void testfun02(void) //测试常量
{
    //无论是变量还是常量，在同一个作用域中不可以重名
    const int TEMPV = 900;
    int temp1 = 100;
    printf("temp1+TEMPVALUE+TEMPV=%d\n", temp1 + TEMPVALUE + TEMPV);
    int temp2 = 100; //使用temp2前须初始化（赋初值）
    temp1 = temp1 + temp2;
}
void testfun03(void) //测试整型
{
    int intvar = 109;                                   // intvar为十进制整数
    printf("intvar=%d\n", intvar);                      //有符号、整型、十进制数
    printf("intvar的有符号十进制形式为: %d\n", intvar); //有符号
    printf("intvar的无符号十进制形式为: %u\n", intvar); //无符号
    printf("intvar的八进制形式为: %o\n", intvar);       //八进制表示
    printf("intvar的16进制形式为: %x\n", intvar);       //十六进制表示(小写)
    printf("intvar的16进制形式为: %X\n", intvar);       //十六进制表示(大写)
    printf("intvar的16进制形式为: %#x\n", intvar);      //十六进制表示(小写加前缀0x)
    printf("intvar的16进制形式为: %#X\n", intvar);      //十六进制表示(大写加前缀0X)
    int intvar2 = 0123;                                 // intvar2为八进制数
    printf("intvar2=%#o\n", intvar2);                   //八进制表示(加前缀0)
    printf("intvar2的十进制形式为: %d\n", intvar2);     //十进制表示
    int intvar3 = 0x123;                                // intvar3为16进制数
    printf("intvar3=%#x\n", intvar3);                   //十六进制表示(小写加前缀0x)
    printf("intvar3的十进制形式为: %d\n", intvar3);     //十进制表示
    printf("%d字节\n", sizeof(intvar3));                //获取intvar3在内存中所占的空间，单位字节
}
int main(void)
{
    printf("这是一个测试语句!\n");
    int temp1 = 100;
    printf("变量temp1的值为:%d\n", temp1);
    testfun01();
    testfun02();
    testfun03();
    return 0;
}
