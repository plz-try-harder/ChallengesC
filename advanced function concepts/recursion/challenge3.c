#include <stdio.h>
char *reverse(const char *lmao);

int main(){
    char str[100];
    char *rev = NULL;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("The original string is: %s\n", str);

    rev = reverse (str);

    printf("The reversed string is: %s\n", rev);

}

char *reverse(const char *lmao){
    static char hum[100];
    static int b;
    
    if (*lmao){
        reverse(lmao+1);
        hum[b++] = *lmao;
    }

    return hum;
    



}