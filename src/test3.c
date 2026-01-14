/**
 * 
 * 
 * 预处理 与 文件操作
 * 
 * #include <stdio.h>
 * #define 宏定义
 * #ifdef  #ifndef  条件编译
 * #ifndef  #endif
 * #ifdef #elif #else #endif
 * 
 */
#include <stdio.h>
#include "./lib/demo1.h"

#define NAME 1+3
#define AGE (NAME + 2)

 int main(){
    printf("hello world\n");

    int sum = getAdd(10,20);
    printf("sum => %d\n",sum);

    double area = getCircleArea(2.0);
    printf("area => %.2f\n",area);

    if AGE{
        printf("define yes 1 %d\n",AGE);
    }


    #ifdef NAME 
    printf("define yes 2 %d\n",NAME);
    #else
    printf("define not");
    #endif
    return 0;
 }