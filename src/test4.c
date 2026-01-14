/**
 * 
 * 文件操作示例
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    printf("file operation test\n");

    FILE *fp = NULL;

    // 以写方式打开文件
    fp = fopen("./txet.txt","w");
    if (fp == NULL)
    {
        printf("file open error\n");
        return -1;
    }else{
        printf("file open success\n");
        fputs("hello file operation 20260114\n",fp);
        fclose(fp);
    }

    // 以读方式打开文件
    fp = fopen("./txet.txt","r");
    if (fp == NULL)
    {
        printf("file open error\n");
        return -1;
    }else{
        char buffer[100];
        // 读取文件内容
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            printf("file content: %s\n",buffer);
        }
        fclose(fp);
    }
    
    //删除文件
    if (remove("./txet.txt") == 0)
    {
        printf("file deleted successfully\n");
    }else{
        printf("file deletion failed\n");
    }
    return 0;

    // 以追加方式打开文件
    // fp = fopen("./txet.txt","a");
    // if (fp == NULL)
    // {
    //     printf("file open error\n");
    //     return -1;
    // }else{
    //     printf("file open success\n");
    //     fputs("appending new line to file\n",fp);
    //     fclose(fp);
    // }
 }