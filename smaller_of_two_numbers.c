//practice
#include <stdio.h>
int main ()
{
    int a,b,small;
    printf("Enter any 2 numbers ;");
    scanf("%d %d",&a,&b);
    small = (a<b)? a : b;
    printf("The smaller of the Two numbers is : %d",small);
    
    
    return 0;
}