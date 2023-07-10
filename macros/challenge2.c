#include <stdio.h>

#define SUM(x,y) ((x) + (y))


int main(){

    int s, f;
    printf ("Enter 2 numbers: ");
    scanf("%d%d", &s,&f);
    

    printf("the sum of these numers is %d\n", SUM(s,f));
}