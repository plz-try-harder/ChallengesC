#include <stdio.h>

int main(int argc, char * argv[] ){
    char ch='\0';
    int charCounter=0;
    int wordCounter=0;
    
    if(argc == 1){
        ch = getchar();
        while(ch!=EOF){ //getc(stdin) != EOF
            if( ch == ' ' || ch == '\n'){
                wordCounter++;
            }else{
                charCounter++;
            }
            ch = getchar();
        }        
    }else{              
        FILE * fP;
        fP = fopen(argv[1], "r");
        ch=getc(fP);
        while (ch != EOF){

            if(ch == ' ' || ch == '\n'){
                wordCounter++;
            }else{
                charCounter++;
            }
            ch= getc(fP);
        }
        
    }
    printf("This file has %d charecters\n", charCounter);
    printf("This file has %d words\n", wordCounter);
    
}