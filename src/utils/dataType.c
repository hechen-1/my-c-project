#include<stdio.h>
char a = 'A';
int num = 0;
short num1 = 2;
long num2 = 23;

float f1 = 1.99;
double f2 = 3.98;

int s = sizeof(num);

int main(){
    printf("字符类型: \n%c",a);
    printf("int size is%d",s);
}