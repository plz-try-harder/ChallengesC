#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillarray(double *array, int n);
void showarray(double *array, int n);

int sorti(void const*, void const*);




int main(){
    srand(time(0));
    double theBIGARRAY[80];

    size_t sizeofarray = sizeof(theBIGARRAY) / sizeof(double);

    fillarray(theBIGARRAY, sizeofarray);

    showarray(theBIGARRAY, sizeofarray);

    qsort( theBIGARRAY, sizeofarray, sizeof(double), sorti);



    showarray(theBIGARRAY, sizeofarray);



}



void fillarray(double *array, int n){
    for (int i = 0; i < n ; i++){
        array[i] = (double)(rand()%100);
    }
}

void showarray(double *array, int n){
    printf("-------------\n");
    for (int i = 0 ; i < n; i++){
        printf("%.2f \n", array[i]);
    }
}

int sorti(void const* p1, void const* p2){
    double const i1 = * (double const *) p1;
    double const i2 = * (double const *) p2;
    
    if(i1 > i2 )
        return 1;
    if (i2 > i1)
        return -1;

    return 0;
}




