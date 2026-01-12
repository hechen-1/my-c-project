/**
 * 结构体
 * 定义，实例化，访问
 * 字符串数组常用API  ==> string.h
 * 
 * strcpy(a,b)  字符串复制  b复制到a
 * strcat(a,b)  字符串拼接  把b拼接到a
 * strcmp(a,b)  字符串比较  相等返回0，a>b返回正数，a<b返回负数
 * 
 * 
 * 
 */
#pragma execution_character_set("utf-8")
#include <stdio.h>
#include <string.h>

// 定义结构体
struct Stu
{
    int age;
    char name[20];
    float salary;
};
void testStrApi();
void main()
{
    // 结构体实例
    struct Stu s1;
    s1.age = 18;
    s1.salary = 3500.00f;
    strcpy(s1.name, "xioahua");

    char str[10];
    strcpy(str, "hello");
    printf("str ==> %s\n", str);

    printf("age => %d\n", s1.age);
    printf("name => %s\n", s1.name);
    printf("salary => %.2f\n", s1.salary);
    printf("你好世界\n");
    fflush(stdout);
    testStrApi();
}

void testStrApi(){
    int bool1 = strcmp("str1","str");
    printf("strcmp => %d\n",bool1);
}