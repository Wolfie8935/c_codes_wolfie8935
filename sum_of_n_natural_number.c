// practice
#include <stdio.h>
int main()
{
    int n;
    printf("Enter till where sum has to be printed : ");
    scanf("%d",&n);
    
    int sum=0;
    for(int i=1 ; i<=n ; i++){
        sum = sum+i;
    }
    
   printf("%d \n",sum);
    
    return 0;
}