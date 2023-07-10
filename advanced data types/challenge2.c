#include <stdio.h>
#include <malloc.h>

struct myArray{
    int arraySize;
    int array[];
};

int main(){
    int desiredSize = 0;
    printf("Enter the size of the array: ");
    
    scanf("%d", &desiredSize);

    struct myArray *ptr= malloc(sizeof (struct myArray) + desiredSize *sizeof(int));

    ptr->arraySize = desiredSize;

    for (int i = 0 ; i < ptr->arraySize ; i++){
        ptr->array[i] = i*2;
    }

    for (int i = 0 ; i < ptr->arraySize ; i++){
        printf("the memebers if the array are :%d \n ", ptr->array[i]);
    }

    return 0;

}