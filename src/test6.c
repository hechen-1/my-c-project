#include<stdio.h>

int main (){

// 指针指向地址
// 指针指向地址的数据类型
// 指针自己的类型 （取决于指向的地址数据类型）
// 指针自己的数据类型  地址类型一般占4个字节 或者8个字节

    //*取首地址指向的值
    //&取首地址

    int num = 12;
    int *p_num;
    p_num = &num;

    printf("*p_num value is num ==> %d\n",*p_num);
    printf("p_num ==> %p\n",&p_num);
    printf("num ==> %p\n",&num);


    //指针偏移   就是指针加减运算
    int num2 = *(p_num+1);
    int num0 = *(p_num-1);

    printf("num2 address ==> %d\n",num2);
    printf("num0 address ==> %d\n",num0);

    return 0;
}