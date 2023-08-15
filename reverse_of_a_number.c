// practice
#include <stdio.h>
int main ()
{
    int d1,d2,d3,d4,d5,n;
    long int revnum;
    printf("The 5 digit integer = ");
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
    revnum=d1*10000+d2*1000+d3*100+d4*10+d5;
    printf("The reverse of the number is %ld",revnum);
    return 0;
}