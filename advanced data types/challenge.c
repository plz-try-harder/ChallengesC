#include <stdio.h>

int sumArray(int size, int A[size]){
    int sum = 0;

    for(int i= 0; i < size; i++){
        sum += A[i];
    }
    return sum;
}


int main(){
    printf("Enter the size of the array: ");
    
    int size= 0;
    
    scanf("%d", &size);
    
    int Array[size];
    
    printf("Enter the %d array elements: \n", size);

    for(int i = 0; i < size ; i++){
        scanf("%d", &Array[i]);
    }

    printf("the sum of all elements of the given array is: %d \n", sumArray(size ,Array));
}