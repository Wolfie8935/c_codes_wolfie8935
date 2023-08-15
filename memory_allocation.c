#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    int *ptr;

    // ptr = (int*) malloc (n * sizeof(n));
    ptr = (int*) calloc (n, sizeof(n));
    if (ptr == NULL){
        printf("ERROR IN MEMORY");
        exit(0);
    }
    for (int i=0; i<n; i++){
        printf("\nEnter number in array: ");
        scanf("%d",ptr+i);
        printf("Memory: %p",ptr+i);
        printf("\nValue: %d\n",*(ptr+i));
    }

    int n2;
    printf("\nEnter the value of n2: ");
    scanf("%d",&n2);
    ptr = realloc(ptr, n2* sizeof(n2));

    for (int i=0; i<n2; i++){
        printf("\nEnter the number in array: ");
        scanf("%d",ptr+i);
        printf("Memory: %p", ptr+i);
        printf("\nValue: %d\n",*(ptr+i));
    }
    free(ptr);

    return 0;
}