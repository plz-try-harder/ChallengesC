
#include <stdio.h>
#include "StringFunctions.h"


int mian(){

    char *str = "LMAAOOLLLAOALOLL";

    int c = numberOfCharsInString(str, 'L');

    printf("%d\n", c);
}