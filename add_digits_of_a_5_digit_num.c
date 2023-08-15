
// practice
#include <stdio.h>
void main ()
{
    int d1,d2,d3,d4,d5,n,sum;
    printf("The 5 digit number = ");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    n=n/10;
    sum=d1+d2+d3+d4+d5;
    printf("The sum of its digits is %d",sum);
}