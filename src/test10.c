#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    printf("%d\n",sizeof(void));  //输出4
    printf("%d\n",sizeof(void*));  //输出4

    //int*  转成  void*
    void *p = NULL;
    int n = 0;
    int*pINT=&n;
    p=pINT;

    //int*   转成short*
    short *s ;
    s= (short*)pINT;

    return 0;
}

//    void* 空类型指针
/**
 * 1.不能偏移
 * 2.不能自增自减：不能加减，不知道单位大小
 * 3.可以接受  所有其他类型指针的指向，二不需要强转类型
 * 
 * 
 */
