#include <stdio.h>
#include <math.h>



int main(){
    int num, position, bitStatus;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter the nth bit to check and set: ");
    scanf("%d", &position);

    bitStatus = (num >> position) & 1;
    printf("The %dth bit is set to %d\n", position, bitStatus);


    int num2 = num | (1 << position);

    printf("Number before setting %d bit: %d(in decimal)\n", position, num);
    printf("Number after setting %d bit : %d(in decimal)\n", position, num2);

    return 0;     



}