// practice
#include <stdio.h>
int main ()
{
    int row;
    printf("Enter the number of rows you want this pattern to  be : ");
    scanf("%d",&row);
    
    
    for (int i=row ; i>=1 ; i--){
        for (int j=i ; j>=1 ; j--){
            printf ("%d ",j);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}