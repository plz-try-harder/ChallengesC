#include <stdio.h>
#include <math.h>

int binToDec(int bin){
    int result = 0;
    for(int i = 0 ; bin > 0  ; i++){
        
        result = result + (bin%2) * pow(2,i);
        bin = bin/10;
        printf("bin = %d\n", bin);
        printf("result = %d\n",result);
        }
    return result;
}

int decToBin(int dec){
    int result=0;
    int c; //carry
    for ( int i = 0 ; dec > 0 ; i++){
        c=dec%2;
        dec = dec/2;
        result = result + c*pow(10,i);
    }
    return result;
}

int main(){
    //int x = 101;
    printf("%d \n", decToBin(31));

    //printf("x = %d \n", x);
    //printf("%d \n",  binToDec(101));
    printf("%d \n", binToDec(11111100));
    if( 01%2 > 0){
        printf("ur mom \n");
    }
    //printf("%d\n",x );
}

// 0000 0010
// 0000 0011
// 0000 0000