/**
 * 
 * c语言标准库
 * stdio.h 文件操作相关API   ==》 fopen  fclose  fread  fwrite  remove  rename
 * stdlib.h  内存分配相关API  ==》 malloc  free  calloc  realloc
 * string.h  字符串操作相关API==》 strcpy  strcat  strcmp  strlen
 * math.h    数学相关API     ==》 sin  cos  tan  pow  sqrt
 * time.h    时间相关API     ==》 time  localtime  asctime  difftime
 * signal.h  信号处理相关API  ==》 signal  raise
 * unistd.h  POSIX操作系统API ==》 access  chdir  getcwd  sleep
 * limits.h  数据类型相关限制  ==》 INT_MAX  CHAR_BIT  LONG_MIN
 * stypes.h  数据类型相关定义  ==》 size_t  ptrdiff_t  wchar_t
 * 
 * sys/* 系统调用相关API  ==》 读写文件，进程控制等
 * dirent.h 目录操作相关API  ==》 opendir  readdir  closedir
 * netinet/* 网络编程相关API ==》 socket  bind  listen  accept
 * pthread.h 线程操作相关API  ==》 pthread_create  pthread_join  pthread_mutex_lock
 * crypto/* 加密相关API    ==》 MD5  SHA1  AES  RSA
 * openssl/* OpenSSL库相关API ==》 SSL_connect  SSL_accept  SSL_read  SSL_write
 * dl/* 动态链接库相关API  ==》 dlopen  dlsym  dlclose
 * 
 * 
 */

 #include <stdio.h>
 #include <time.h>
 #include <math.h>


 #define CHECK_TYPE(x)\
    do{\
        printf("%s", #x);\
        if(sizeof(x) == sizeof(int)){\
            printf(" is int\n");\
        }else if(sizeof(x) == sizeof(double)){\
            printf(" is double\n");\
        }else{\
            printf(" is other type\n");\
        }\
    }while(0)


 int main(){

    //获取当前系统时间 并格式化输出 YYYY-MM-DD HH:MM:SS
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    printf("Current time: %04d-%02d-%02d %02d:%02d:%02d\n",
           local->tm_year + 1900,
           local->tm_mon + 1,
           local->tm_mday,
           local->tm_hour,
           local->tm_min,
           local->tm_sec);

    // time_t now;
    // time(&now);
    // printf("Current time: %s", ctime(&now));

    //使用math.h 计算平方根和幂
    double num = 16.0;
    double sqrt_num = sqrt(num);
    double pow_num = pow(num, 2);
    printf("Square root of %.2f is %.2f\n", num, sqrt_num);
    printf("%.2f raised to the power of 2 is %.2f\n", num, pow_num);

    printf("0.1 + 0.2 = %f\n",0.1+0.2);
    int arr[2] ={1,3};
    printf("Size of array: %zu bytes\n", sizeof(arr));
    
    CHECK_TYPE(12);
    CHECK_TYPE(12.3);
    return 0;
 }