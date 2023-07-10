#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>


short socketCreate(){
    short hSocket;
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM, 0);
    return hSocket;
}

int bindCreatedSocket(int hSocket){
    int iRetval=-1;
    int clientPort= 12346;

    struct sockaddr_in remote = {0};
    remote.sin_family = AF_INET;

    remote.sin_addr.s_addr = htonl(INADDR_ANY);
    remote.sin_port = htons(clientPort); // local port

    iRetval = bind(hSocket, (struct sockaddr *)&remote, sizeof(remote));
    return iRetval;
}

int main(int argc, char *argv[]){
    int socket_desc= 0, sock=0, clientLen=0;
    struct sockaddr_in client;
    char client_message[200]={0};
    char message[100]={0};
    const char* pMessage = "hello";

    //create socket
    socket_desc = socketCreate();
    if(socket_desc == -1){
        printf("Could not creat socket");
        return 1;
    }

    printf("Socket created\n");

    //Bind
    if(bindCreatedSocket(socket_desc) < 0){ // sets the socket to a port and an address
        perror("bind failed.");
        return 1;
    }

    printf("bind done\n");
    //listen
    listen(socket_desc,3); // 3 is the number of max connections

    //Accept and incoming connection

    while(1){
        printf ("waiting for incoming connectinos..\n");
        clientLen= sizeof(struct sockaddr_in);

        // accept connection from an incoming client "WAITS FOR A CONNECTION"
        sock = accept(socket_desc, (struct sockaddr *)&client,(socklen_t*)&clientLen );

        if(sock <0){
            perror("accept failed");
            return 1;
        }

        printf("Connection accepted\n");
        memset(client_message , '\0', sizeof(client_message));
        memset(message, '\0', sizeof(message));

        //recieve a reply from the client
        if(recv(sock, client_message, 200,0) < 0){
            printf("recv failed");
            break;
        }

        printf("Client reply: %s\n", client_message);

        if(strcmp(pMessage, client_message) == 0){
            strcpy(message, "Hi there!");
        }else{
            strcpy(message, "Invalid Message!");
        }

        //send some data
        if(send(sock , message , strlen(message), 0) < 0){
            printf ("send failed");
            return 1;
        }

        close(sock);
        sleep(1);
    }
    return 0;
}