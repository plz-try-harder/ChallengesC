#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isOdd(int i);
bool isEven(int i);
bool isPrime(int num);

int main(){
    //my solution using fgets and sscanf
    /*char buffer[255];
    int num[5];
    FILE *ptr= NULL;

    if ((ptr = fopen("numbers.txt", "r"))== NULL){
        exit(1);
    }
    while(!feof(ptr)){
        fgets(buffer, 255, ptr);
        sscanf(buffer, "%d %d %d %d %d", &num[0],&num[1],&num[2],&num[3],&num[4]);
        for (int i = 0 ; i < 5; i++){
            if (isOdd(num[i])){
                printf("Nummber is Odd: %d\n", num[i]);
            }else{
                printf("number is even: %d\n", num[i]);
            }
            if(isPrime(num[i])){
                printf("Nummber is prime: %d\n", num[i]);
            }
        }
    }*/
    // his solution using fscanf
    FILE * fPtrIn = NULL;

   int num = 0, success = 0;

   fPtrIn   = fopen("numbers.txt", "r");

   if(fPtrIn == NULL)
   {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
   }

   /* File open success message */
   printf("File opened successfully. Reading integers from file. \n\n");

   // Read an integer and store read status in success. (initial read)
   success = fscanf(fPtrIn, "%d", &num);

    do {
       if (isPrime(num))
           printf("Prime number found: %d\n", num);
       else if (isEven(num))
           printf("Even number found: %d\n", num);
       else
           printf("Odd number found: %d\n", num);

      // Read an integer and store read status in success.
      success = fscanf(fPtrIn, "%d", &num);

    } while(success != -1); // !!!!!!!! it returns -1 when it reaches the end of the file

    fclose(fPtrIn);

    return 0;
}













bool isPrime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

bool isOdd(int i){
    if (i%2 == 1)
        return 1;
    return 0;
}

bool isEven(int i){
    if(i%2 == 0)
        return 1;
    return 0;
}
