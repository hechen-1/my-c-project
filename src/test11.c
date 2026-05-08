#include<stdio.h>

int main(){

    int arr[3]={1,2,3};

    int s = 12;
    int* p = NULL;

    p = &s;


    printf("s ==> %d\n",s);
    printf("&s ==> %x\n",&s);

    printf("p ==> %x\n",p);
    printf("*p ==> %d\n",*p);
    printf("&(*p) ==> %x\n",&(*p));

    int  arr2[]={1,2,3};

    int t = sizeof(arr2);
    int r =  sizeof(arr2[0]);
    printf("size ==> %d \n",t/r);

    int length = t/r;



    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("arr[%d] ==>%d\n",i,arr2[i]);
    }


    int (*pArr2) [3] = &arr2;
    
    printf("arr2 p ==> %x\n",pArr2);
    printf("arr2 p ==> %d\n",*pArr2[0]);  
    

    return 0;
}



//指针数组

//数组指针

int arr[3];
int (*pArr) [3];