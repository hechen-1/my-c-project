/**
 * 函数
 * 先声明，再定义，后调用
 * 递归函数
 */

#include <stdio.h>

int getNum(int mun);
int deepCall(int n);
void main()
{
    int addNum = getNum(12);
    printf("add1 num is ==> %d \n", addNum);
    printf("add2 num is ==> %d \n", addNum);

    deepCall(3);
}

int getNum(int num)
{
    return ++num;
}

int deepCall(int n)
{
    if (n >= 0)
    {
        printf("num1 %d \n", n);
        --n;
        deepCall(n);
    }
    else
    {
        printf("num3 %d \n", n);
        return 0;
    }
}