#include <stdio.h>
#include <string.h>

int main(){

    /**
     * 位运算
     * 预处理器，宏定义defined 别名 typeof 类型定义
     * 结构体
     * 指针，指针数组，指针函数
     * 内存堆栈，动态数组
     * 函数指针，回调函数
     * 
     */

     //演示结构体用法
        struct Student
        {
            /* data */
            int id;
            char name[20];
            int age;
        } stu;
        struct Student s1 = {1,"zhangsan",20};
        printf("id ==> %d\n",s1.id);
        printf("name ==> %s\n",s1.name);
        printf("age ==> %d\n",s1.age);

        stu.id = 2;
        stu.age = 30;
        // stu.name[0] = 'l';
        // stu.name[1] = 'i';
        const char *str = "lily";
        strcpy(stu.name, str);
        // strcpy(stu.name, "lily");
        int length = strlen(stu.name);
        printf("length ==> %d\n",length);
            printf("id ==> %d\n",stu.id);
            printf("name ==> %s\n",stu.name);
            printf("age ==> %d\n",stu.age);

    /**    指针 */
     int s = 12;
    int* p = NULL;
    p = &s;

    printf("s ==> %d\n",s);
    printf("&s ==> %x\n",&s);

    printf("p ==> %x\n",p);
    printf("*p ==> %d\n",*p);
    printf("&(*p) ==> %x\n",&(*p));

    return 0;
}