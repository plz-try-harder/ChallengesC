#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t cur_time= 0;
    char *cur_t_string;
    cur_time = time(0);

    cur_t_string = ctime(&cur_time); // you have to pass the pointer not the variable itself!!!

    printf("the current time is %s\n", cur_t_string);
}