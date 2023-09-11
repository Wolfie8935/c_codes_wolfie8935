#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define N 5

void* threadFunction(void* threadID){
    int tid = *((int*) threadID);
    printf("Creation of thread %d\n",tid);
    sleep(1);
}

int main (){
    
    pthread_t t[N];
    int threadID[N];
    for(int i=0; i<N; i++){
        threadID[i] = i;
        pthread_create(&t[i], NULL, threadFunction, (void*) &threadID[i]);
    }
    for (int i=0; i<N; i++){
        pthread_join(t[i], NULL);
    }    
    
    return 0;
}
