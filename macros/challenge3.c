#include <stdio.h>

#define SQUARE(x) ((x) * (x))

#define CUBE(x) ((x) * (x) * (x))


int main(){
    puts("Enter a number");

    int i;
    scanf("%d", &i);
    printf("The square of this number is %d\nThe Cube of this number is %d\n", SQUARE(i), CUBE(i));
    
}