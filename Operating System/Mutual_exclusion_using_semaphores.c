//Mutual Exclusion Using Semaphores
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define N 3

//shared resource
int shared_resource = 0;
sem_t semaphore;

void *threadFunction(void* threadID){
    int tid = *((int*) threadID);
    printf("Thread %d is trying to access the shared resource...\n",tid);
    sem_wait(&semaphore);
    printf("Thread %d has gained access of the shared resource...\n", tid);
    shared_resource++;
    printf("Shared Resouce Value: %d\n", shared_resource);
    printf("Thread %d is releasing shared resource...\n\n", tid);
    sem_post(&semaphore);
    pthread_exit(NULL);
}

int main (){
    
    pthread_t thread[N];
    int threadID[N];
    sem_init(&semaphore, 0, 1);
    for (int i=0; i<N; i++){
        threadID[i] = i;
        pthread_create(&thread[i], NULL, threadFunction, (void*)&threadID[i]);
    }
    for (int i=0; i<N; i++){
        pthread_join(thread[i], NULL);
    }
    sem_destroy(&semaphore);
    
    return 0;
}
