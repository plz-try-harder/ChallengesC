#include <stdio.h>

int sum(int num);

int main(){
    printf("input the last number from the range 1 to 5\n");
    printf("%d\n", sum(8));
}

int sum(int num){
    if (num == 0){
        return 0;
    }
    
    return sum(num-1)+num;
}