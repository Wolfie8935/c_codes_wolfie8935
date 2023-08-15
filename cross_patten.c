#include <stdio.h>


int main ()
{
    int i,j,n,p;
    printf("The number of rows are : ");
    scanf("%d",&n);
   
    
    for (i=0; i<=n-1; i++){
        for (j=0; j<=n-1; j++){
            if (j==i){
                printf("\\");
            }
            else if (j==((n-1)-i)){
                printf("/");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    
    
    
    return 0;
}