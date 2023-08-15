#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int a[3][3], b[3][3], multi[3][3], n;
    printf("Program begins");
    printf("\nEnter matrix a: \n");
    
    // a[3][3] = (int*) malloc (n*sizeof(int));
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("The matrix a is: ");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter matrix b: ");
    // b[3][3] = (int*) malloc (n*sizeof(int));
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d ",&b[i][j]);
        }
    }
    printf("The matrix b is: ");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe multiplication is: ");
    // multi[3][3] = (int*) calloc (n,sizeof(int));
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            multi[i][j] = 0;
            for (int k=0; k<3; k++){
                multi[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}