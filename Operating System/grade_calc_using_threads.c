// Write a c program to create 3 threads and print the grade sheet of 3 students (1 thread for each student).
// Implement the mutual exclusion using semaphore such that the grade calculation is done by only one thread at a time. 
// If average >9.0 then grade is O, average > 8.0 and <8.9 then A, average > 7.0 and < 7.9 then B, and average < 7.0 then C.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define N 3
int shared_resource = 0;
sem_t semaphore;

void* threadFunction (void* threadID){
    int tid = *((int*)threadID);
    sem_wait(&semaphore);
    shared_resource++;
    float avrg;
    scanf("%f",&avrg);
    if(avrg>9.0){
        printf("Student %d has scored grade O\n", tid);
    }
    else if(avrg>8.0 && avrg<8.9){
        printf("Student %d has scored grade A\n", tid);
    }
    else if(avrg>7.0 && avrg<7.9){
        printf("Student %d has scored grade B\n", tid);
    }
    else{
        printf("Student %d has scored grade C\n", tid);
    }
    sem_post(&semaphore);
    avrg = 0;
    pthread_exit(NULL);
}

int main (){
    
    pthread_t student[N];
    int threadID[N];
    sem_init(&semaphore, 0, 1);
    // float avrg[N];
    // for (int i=0; i<N; i++){
    //     scanf("%f",&avrg[i]);
    // }
    for (int i=0; i<N; i++){
        threadID[i] = i;
        pthread_create(&student[i], NULL, threadFunction, (void*)&threadID[i]);
    }
    for(int i=0; i<N; i++){
        pthread_join(student[i], NULL);
    }
    sem_destroy(&semaphore);
    
    return 0;
}
