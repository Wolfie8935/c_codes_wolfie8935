#include <stdio.h>
int main()
{
    int n,rem,rev;
    scanf("%d",&n);
    int n1=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n1){
        printf("PALI");
    }
    else{
        printf("NPALI");
    }


    return 0;
}