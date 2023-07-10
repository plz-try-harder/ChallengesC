#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

jmp_buf bug;


void error_recovery(){
printf("erororr\n");
    longjmp(bug,1);
}

int main(){

    while (setjmp((bug)) != 1){
        printf("first one\n");
        error_recovery();
        printf("second one\n");
    }

    return 0;

    
}