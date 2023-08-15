// practice
#include <stdio.h>
int main()
{
    int n;
    printf("Find the factoial of : ");
    scanf("%d",&n);
    
    int fact=1;
    int i=1;
    while (i<=n) {
        fact=fact*i;
        i++;
    }
    
    printf("%d\n", fact);
    
    
    return 0;
}