// practice
#include <stdio.h>
int main()
{
    int n;
    printf("Enter till where table has to be printed : ");
    scanf("%d",&n);
    
    int table;
    for(int i=1 ; i<=10 ; i++){
        table=n*i;
        printf("%d \n",table);
    }
    
    
    return 0;
}