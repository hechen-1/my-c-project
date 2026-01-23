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


    //指针偏移  指针指向地址不变，但通过指针取数据时，地址向左右偏移几个单位
    //指针加减  指针本身指向的地址发生变化，向左右移动几个单位

    int str = 0x1A2B3C4D; //十六进制表示
    unsigned char *p_str = (unsigned char*)&str;//p_str 指向 str 变量的地址4d

    printf("str address ==> %0x\n",&str);
    printf("p_str address ==> %0x\n",p_str);

    printf("*str ==> %0x\n",str);
    printf("*p_str ==> %0x\n",*p_str); 
    printf("*p_str ==> %0x\n",*(p_str+1)); //指针偏移1个单位，取下一个地址的数据
    p_str++; //指针加减，指针指向变了
    printf("*p_str ==> %0x\n",*(p_str+1)); 
    printf("*p_str ==> %0x\n",*(p_str+2)); 
    printf("*p_str ==> %0x\n",*(p_str-1)); 

    printf("sizeof str is %0x\n",*p_str);


    // 4 3 2 1
    // 4D 3C 2B 1A
    // p_str 指向最低地址  &str 指向最低地址

    // p_str++; //指针偏移1个单位

    

    return 0;
}