#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int has_ch(char ch, const char * line){
    while(*line)
        if (ch == *line++)
            return 1;
    
    return 0;
}


int main(int argc, char* argv[]){
    char* c = argv[1];
    char* v = argv[2];

    char buffer[255];
    char *buf = buffer;
    size_t bufferSize= 255;
    size_t characters= 0;

    FILE *ptr = NULL;

    ptr = fopen( v , "rw");

    if (buffer == NULL){
        exit(1);
    }
    while (!feof(ptr)){
        characters = getline(&buf,&bufferSize, ptr);
        //if(strchr(buffer, c[0]) != NULL){ // strchr returns Null if the char isn't found
        if(has_ch(c[0],buffer)){
            puts(buffer);
        }
    }
    fclose(ptr);
    
        //puts(buffer);

}