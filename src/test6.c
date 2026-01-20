#include<stdio.h>

int main (){


    //*取首地址指向的值
    //&取首地址
    
    int num = 12;
    int* p_num;
    p_num = &num;

    printf("*p_num value is num ==> %d\n",*p_num);
    return 0;
}