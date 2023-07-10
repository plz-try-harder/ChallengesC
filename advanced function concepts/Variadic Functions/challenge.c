#include <stdio.h>
#include <stdarg.h>

double addingNumbers(int count, ...);


int main(){
    printf("%.2lf\n", addingNumbers(2, 10.0, 20.0));
    printf("%.2lf\n", addingNumbers(3, 10.0,20.0,30.0));
    printf("%.2lf\n", addingNumbers(4, 10.0,20.0,30.0,40.0));
}

double addingNumbers(int count, ...){

    va_list arg1;
    va_start (arg1, count);
    double sum = 0.0;
    for(int i = 0; i < count ; i ++){
        sum+= va_arg(arg1, double);
    }
    va_end(arg1);
    return sum;
}