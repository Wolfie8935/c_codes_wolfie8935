#include <stdio.h>

int main(){

    int mat1[3][3], mat2[3][3];

    printf("Enter matrix 1: \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&mat1[i][j]);
        }
    } 

    printf("Enter matrix 2: \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&mat2[3][3]);
        }
    }

    int** mat3[3][3] = (int**) malloc (3*sizeof(int*));
    for (int i=0; i<3; i++){
        for (int  j=0; j<3; j++){
            mat3[i][j] = (int*) calloc (3,sizeof(int));
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                mat3[i][j] = mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Matrix multipliction is: \n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",mat3[i][j]);
        }
    }

    return 0;
}