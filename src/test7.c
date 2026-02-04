// 内存区域划分
/**
 * 代码区：存放函数的二进制代码
 * 常量区：字符串常量，const修饰的常量
 * 静态全局区：静态变量，全局变量
 * 栈区：普通变量
 * 堆区：程序手动申请和释放
 *
 */

#include <stdio.h>
#include <stdlib.h>

int c;        // 全局普通变量
static int d; // 全局静态变量

int main()
{
    static int a; // 静态区  局部区
    int b = 20;   // 栈区  普通 局部；必须有手动初始化

    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("d is %d\n", d);


    //1.申请内存 5个int大小
    int len = 5;
    int *p = (int*)calloc(sizeof(int),len); // 堆区

    printf("sizeof len ==> %d\n",sizeof(len));
    //2. 使用刚申请的内存地址，设值
    for (int i = 0; i < 6; i++)
    {
        /* code 越界异常*/
        scanf("%d", &p[i]);
    }
    //取值
    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("%d===%d\n",i, p[i]);
    }
    // 释放内存
    free(p);
    p=NULL;
    return 0;
}