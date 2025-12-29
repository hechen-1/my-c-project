#include <stdio.h>
#include "./utils/caculator.h"

void get();
int main()
{
    printf("Hello, World!\n");

    int r1 = add(5, 3);
    int r2 = subtract(5, 3);
    int r3 = multiply(5, 3);
    double r4 = divide(5, 0);

    printf("Add: %d\n", r1);
    printf("Subtract: %d\n", r2);
    printf("Multiply: %d\n", r3);
    printf("Divide: %.2f\n", r4);

    get();
    return 0;
}

void get()
{

    /**
     * 最小单位 ‘位’能表示0或1，bit;8位（0000 0001）是一个字节 1B == 8bit
     *
     *
     *
     */

    short a1 = 2; // 占2字节  2*8=16位
    int a = 1;    // int 占 4字节，4*8=32位

    long a2 = 3;      // 4字节  4*8=32位
    long long a3 = 4; // 8字节  8*8=64位

    float b1 = 0.2;           // 4字节 4*8=32位
    double b2 = 8.8989;       // 8字节 8*8=64位
    long double b3 = 8989.67; // 16字节 16*8=128位

    char b = 'A'; // 占1字节  8位

    // 运算符
    /**
     * +加，-减，*乘，/除，%取余，
     * ++自增1，--自减1，
     * &&与，||或，!非
     * ==相等，!=不等,>大于,>=大于等于,<小于,<=小于等于
     *
     * &按位与，|按位或,~按位取反，^按位异或
     * <<所有位左移，>>所有位右移
     */

    if (1)
    {
        printf("ddd==if/n");
    }
    else if (2)
    {
        printf("sss");
    }
    else
    {
        printf("fff");
    }

    switch (a)
    {
    case 1:
        printf("one  switch/n");
        break;
    case 2:
        printf("two");
    case 3:
        printf("three");
        break;
    default:
        printf("other");
        break;
    }


    for (int i = 0; i < 10; i++)
    {
        printf("for === %d\n", i);
    }
    // for (; ;);无限循环
    int ab=1;
    while (ab<10)
    {
        printf("while === %d\n",ab);
        ++ab;
        /* code */
    }

    int k =1;
    do
    {
        printf("do while === %d \n",k);
        ++k;
        /* code */
    } while (k<5);
    
    
    
    
    printArr();
}