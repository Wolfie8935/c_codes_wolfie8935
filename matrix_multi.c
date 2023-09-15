#include <stdio.h>
#include <stdlib.h> // Include this header for malloc and calloc

int main() {

    int mat1[3][3], mat2[3][3];

    printf("Enter matrix 1: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter matrix 2: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]); // Use mat2[i][j] instead of mat2[3][3]
        }
    }

    int** mat3 = (int**)malloc(3 * sizeof(int*)); 
        for (int i = 0; i < 3; i++) {
        mat3[i] = (int*)calloc(3, sizeof(int));
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j]; 
            }
        }
    }
    printf("Matrix multiplication is: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n"); 
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(mat3[i]);
    }
    free(mat3);

    return 0;
}
