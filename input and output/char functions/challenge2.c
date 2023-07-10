#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv){
    char ch= '\0';
    FILE * fP1, * fP2;
    fP1 = fopen(argv[1], "r");
    fP2 = fopen("temp", "w");

    
    do {
        ch = getc(fP1);
        if(isupper(ch)){
            putc(tolower(ch), fP2);
        }else{
            putc(toupper(ch) , fP2);
        }
    }while (ch != EOF);

    remove(argv[1]);
    rename("temp", argv[1]);

    fclose(fP1);
    fclose(fP2);
    


}