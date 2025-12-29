#include <stdio.h>
#include "caculator.h"
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
double divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return 0; // 返回0表示错误
    }
    return (double)a / b;
}

int arr[4] = {1, 2, 3, 4};
int arr_1[4] = {1, 2};
char str2[]={'1','a','2','k','\0'};
char str3[]="string";

void printArr()
{

    for (int i = 0; i < 4; i++)
    {
        /* code */

        printf(" forArr first=== %d \n",arr_1[i]);
    };

    int arr2[2][3]={{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++)
    {
        printf("row ==%d \n",i);
        for (int j = 0; j < 3; j++)
        {
            printf("col ==%d\n",arr2[i][j]);
            /* code */
        }
        
        /* code */
    }

    printf("str2==%c \n",str2[2]);
    printf("arr2 string==%s \n",str2);
    
    printf("arr2 sizeof == %d \n",sizeof(str2));

    
}
