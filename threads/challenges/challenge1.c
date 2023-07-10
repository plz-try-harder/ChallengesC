#include <stdio.h>
#include <pthread.h>


int counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* func(void* thread_arg){
    int* x = (int *) thread_arg;
    pthread_mutex_lock(&mutex); // with adding this line challenge2 is complete
    counter++;
    

    printf("Message is %d, Thread id is %ld, modified counter is %d\n", *x, pthread_self(), counter);
    printf("Message is %d, Thread id is %ld, read counter is %d\n", *x, pthread_self(), counter);
    pthread_mutex_unlock(&mutex); // with adding this line challenge2 is complete
}

int main(){
    pthread_t threads[10];
    int values[10];

    for (int i = 0; i < 10 ; i++){
        values[i]=i;
        pthread_create(&threads[i], NULL, func , &values[i]);
    }
    for(int i =0; i < 10; i++){
        pthread_join(threads[i], NULL);
    }

    return 0;
}


