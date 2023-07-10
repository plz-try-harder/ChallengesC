#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void printPids(){
    printf("My ID is: %d \n My Parent ID is: %d \n", getpid(), getppid());
}

int main(){
    int pid1, pid2;

    pid1 = fork();
    pid2 = fork();


    if(pid1 >  0 && pid2 > 0){
        printf("Parent here\n");
        printPids();
    }else if (pid1 == 0 && pid2 > 0){
        printf("First child here\n");
        printPids();
    }else if(pid1 > 0 && pid2 == 0){
        printf("Second child here\n");
        printPids();
    }else{
        printf("Third child there\n");
        printPids();
    }

    
    return 0;
}