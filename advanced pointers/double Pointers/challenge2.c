#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptr){
    *ptr = malloc(sizeof(int));
}


void loser(){
    int *ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 10;
    printf("the value is %d\n",*ptr);
    free(ptr);
}

int main(){
    loser();

}

