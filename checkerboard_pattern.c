
#include <stdio.h>
int main ()
{
    int i,j,n,p;
    printf("The number of row are : ");
    scanf("%d",&n);
    
    for (i=1; i<=n ; i++){
        if (i%2==0){
            for (j=1 ; j<=2*n ; j++){
                if (j%2==0){
                    printf("* ");
                }
                else {
                    printf(" ");
                }
            }
        }
        else {
            for (j=1 ; j<=2*n ; j++){
                if (j%2==0){
                    printf(" ");
                }
                else {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }    
    
    
    
    return 0;
}
