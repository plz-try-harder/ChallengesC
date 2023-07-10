#include <stdio.h>
#include <stdlib.h>


int main(){

    int a = 35;
    int *ip = &a;
    int **ipp= &ip;


    printf("printing the value of the variable:\nusing the variable itself a= %d\n", a);
    printf("using the pointer a= %d\n", *ip);
    printf("using the double pointer= %d\n\n",**ipp);


    printf("printing the address of the variable:\n using the variable itself %p\n", &a);
    printf("using the pointer %p\n",ip);
    printf("using the double pointer= %p\n\n",*ipp);


    printf("Printing the value of singlePointer:\n using the singlePointer %p\n",ip);
    printf("using the doublePointer %p\n\n", *ipp);

    printf("The address of the single pointer:\n using the siglePointer %p\n", &ip);
    printf("using the double Pointer %p\n\n", ipp);



    printf("Value of doublePointer %p\n", ipp);
    printf("adress of doublePointer %p\n",&ipp);

}