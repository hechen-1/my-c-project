#include <stdio.h>

/**
 *
 * 指针函数  是函数返回指针类型
 * 函数指针  是指针指向函数
 */
int *test();
void test1();

typedef void P_NAME();
int main()
{

    int a = 1;
    int *p = &a;

    P_NAME *p1 = &test1;
    (*p1)();
    p1();

    P_NAME *p2 = test1;
    (*p2)();
    p2();

    //不用别名
    void(*p3)() = &test1;
    p3();

    return 0;
}

void test1()
{
    printf("===test1\n");
}

//函数指针
int *test()
{
    int a = 2;
    int *p = &a;
    return p;
}