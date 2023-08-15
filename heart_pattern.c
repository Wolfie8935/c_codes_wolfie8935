#include <stdio.h>
int main ()
{
    int i,j,n;
    printf("The number of rows are : ");
    scanf("%d",&n);

    for (i=n/2; i<=n; i+=2){
        for (j=1; j<=n-i; j+=2){
            printf("  ");
        }
        for (j=1; j<=i-1; j++){
            printf("* ");
        }
        for (j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=i-1; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (i=n; i>=1 ; i--){
        for (j=n; j>i ; j--){
            printf("  ");
        }
        for (j=(i*2)-1; j>=1 ; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
