#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    for (int i = 0 ; i < 50 ; i++){
        double soof= (double)(rand()%2- 0.5) / (double)(rand()%10);
        printf("%f\n", soof);
    }
}