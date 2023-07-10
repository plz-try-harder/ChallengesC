#include <stdio.h>

#define IS_UPPER(c) (c >= 'A') && (c <= 'Z') //? 1 : 0

#define IS_LOWER(c) (c >= 'a') && (c <= 'z') //? 1 : 0

#define IS_ALPHA(x) (IS_LOWER(x) || IS_UPPER(x)) //? 1 : 0)



int main(){
    puts("enter a char");
    char c;

    c=getchar();
    if(!IS_ALPHA(c)){
        printf("Entered character isn't from the alphapet\n");
    }
    else if(IS_LOWER(c)){
        printf("%c is a lower char\n", c);
    }
    else if(IS_UPPER(c)){
        printf("%c is an upper char\n", c);
    }

}