#include <stdio.h>
//#include "StringFunctions.h"
//#include <ctype.h>

int numberOfCharsInString(char *str, char ch){
    int count=0;

    while (*str != '\0'){
        if (ch == *str)
            count++;
        str++;
    }
    return count;
}

// int removeNonAlphaCharacters(char *source){
//     while (*str != '\0'){
//         if ( !((*str <= 'A' && *str >= 'Z') || (*str <= 'a' && *str >= 'z')) ){
            
//         }
//     }
// }



