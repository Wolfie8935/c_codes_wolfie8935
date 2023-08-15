// practice
#include <stdio.h>

void printHello();

int main ()
{
    printHello();
    printHello();
    
    return 0;
}

void printHello () {
    
     int row;
    printf("Enter the numbers of rows : ");
    scanf("%d",&row);
    
    for(int i=row ; i>=1 ; i--) {
        for(int j=i ; j>=1 ; j--) {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int k=1 ; k<=row ; k++) {
        for(int l=1 ; l<=k ; l++) {
            printf("* ");
        }
        printf("\n");
    }
}