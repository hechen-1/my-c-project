#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <unistd.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/**
 * windows环境构建文件命令
 * gcc src/test8.c -o test8.exe -lws2_32
 * 
 * 
 */

#define PORT 8099
#define BUFFER_SIZE 1024

int main(){
    //初始化winsock
    WSADATA wsaData;
    if(WSAStartup(MAKEWORD(2,2), &wsaData) != 0){
        printf("fail to initalize winsock!\n");
        return 1;
    }
    //创建套接字
    int sock = socket(AF_INET,SOCK_STREAM,0);
    if(sock == INVALID_SOCKET){
        printf("error creating socket: %d\n",WSAGetLastError());
        WSACleanup();
        return 1;
    }

    //配置服务器地址
    struct sockaddr_in serverAddr;
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(PORT);

    if(bind(sock,(struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR){
        printf("bind failed: %d\n",WSAGetLastError());
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    //监听连接
    if(listen(sock,3) == SOCKET_ERROR){
        printf("listen failed: %d\n",WSAGetLastError());
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    printf("server is listening on port %d...\n", PORT);

    // 主循环：持续接受并处理客户端连接（顺序处理）
    while (1) {
        struct sockaddr_in clientAddr;
        int clientAddrSize = sizeof(clientAddr);
        SOCKET clientSock = accept(sock, (struct sockaddr*)&clientAddr, &clientAddrSize);
        if (clientSock == INVALID_SOCKET) {
            printf("accept failed: %d\n", WSAGetLastError());
            // 继续监听下一个连接
            continue;
        }

        printf("client connected %s:%d\n", inet_ntoa(clientAddr.sin_addr), ntohs(clientAddr.sin_port));

        char buffer[BUFFER_SIZE] = {0};
        int n = recv(clientSock, buffer, BUFFER_SIZE - 1, 0);
        if (n > 0) {
            buffer[n] = '\0';
            printf("received message: %s\n", buffer);
            const char *response = "hello client!";
            send(clientSock, response, (int)strlen(response), 0);
            printf("response sent to client\n");
        } else if (n == 0) {
            printf("client disconnected\n");
        } else {
            printf("recv failed: %d\n", WSAGetLastError());
        }

        closesocket(clientSock);
        // 继续等待下一个客户端
    }

    // unreachable in current design; to stop the server use external termination (Ctrl+C)
    // closesocket(sock);
    // WSACleanup();
    // return 0;
}