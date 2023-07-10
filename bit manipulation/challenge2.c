#include <stdio.h>
#include <math.h>

int binToDec(unsigned long bin);
int decToBin(int dec);



int main(){
    int w1, w2;

    printf("enter two numbers:\nfirst int:");
    scanf("%d",&w1);
    
    printf("second int:");
    scanf("%d",&w2);
    
    //int w3=  decToBin(w1);
    //int w4=  decToBin(w2);
    //int w5 = decToBin(w1&w2);
    printf("\nthe result of ~ to these numbers %d(%d) is %d\n",w1,decToBin(w1) , decToBin(~w1));// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    printf("\nthe result of ~ to these numbers %d(%d) is %d\n",w2,decToBin(w2) , decToBin((~w2))); // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    
    printf("\nthe result of & to these numbers %d(%d) and %d(%d) is %d\n",w1,decToBin(w1),  w2, decToBin(w2) , decToBin(w1&w2));
    printf("\nthe result of | to these numbers %d(%d) and %d(%d) is %d\n",w1,decToBin(w1),  w2, decToBin(w2) , decToBin(w1|w2));
    printf("\nthe result of ^ to these numbers %d(%d) and %d(%d) is %d\n",w1,decToBin(w1),  w2, decToBin(w2) , decToBin(w1^w2));
    printf("\nthe results of applying the shift operator << on number %d(%d) by 2 places is number (%d) is %d\n", w1, decToBin(w1), decToBin(w1<<2), w1<<2);
    
    return 0;
}





int binToDec(unsigned long bin){
    int result = 0;
    for(int i = 0 ; bin > 0  ; i++){
        
        result = result + (bin%2) * pow(2,i);
        bin = bin/10; 
        printf("bin = %ld\n", bin);
        printf("result = %d\n",result);
        }
    return result;
}

int decToBin(int dec){
    int result=0;
    int c; //carry
    int i=0;
    while ( dec !=0 ){
        c=dec%2;
        dec = dec/2;
        result = result + c*pow(10,i);
        i++;
    }
    return result;
}


