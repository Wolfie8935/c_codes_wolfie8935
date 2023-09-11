#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){
    
    int pid = fork();
    if(pid == 0){
        printf("\nODD Numbers from 1 to 20 are: ");
        for(int i=1; i<=20; i++){
            if (i%2!=0){
                printf("%d ",i);
            }
        }
    }
    else{
        printf("\nEVEN Numbers from 1 to 20 are: ");
        for (int i=1; i<=20; i++){
            if (i%2==0){
                printf("%d ",i);
            }
        }
    }
    
    
    return 0;
}
