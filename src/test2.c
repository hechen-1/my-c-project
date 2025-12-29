/**
 * 结构体
 * 
 * 
 */

#include<stdio.h>
#include<string.h>

 struct Stu {
        int age;
        char name[20];
        float salary;
    };

void main(){
    //结构体实例
    struct Stu s1;
    s1.age = 18;
    s1.salary = 3500.00f;
    strcpy(s1.name,"xioahua");

    char str[10];
    strcpy(str,"hello");
    printf("str ==> %s\n",str);
    
    printf("age => %d\n",s1.age);
    printf("name => %s\n",s1.name);
    printf("salary => %.2f\n",s1.salary);

}