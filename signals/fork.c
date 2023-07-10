#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_COUNT 10
#define BUF_SIZE 100

void childProcess(void);
void parentProcess(void);

int main(){
    pid_t pid;
    char buf[BUF_SIZE];

    //fork();

    pid = fork();
    if(pid == 0){
        for(int i = 1; i <=MAX_COUNT ; i++){
            sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
            childProcess();
            write(1, buf, strlen(buf));
        }
    }else if(pid > 0){
        for(int i = 1; i <=MAX_COUNT ; i++){
            sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
            parentProcess();
            write(1, buf, strlen(buf));
        }   
    }else{
        printf("Forck failed\n");
        return 1;
    }
}


void childProcess(void){
    printf("This is the child lol\n");
}

void parentProcess(void){
    printf ("This is the parent\n");
}