
//prctice
#include <stdio.h>
#include <math.h>
void main ()
{
    float x,y,r,phi,theta;
    printf("The cartesian coordinates are ");
    scanf("%f %f",&x,&y);
    r=sqrt((x*x)+(y*y));
    phi=atan(y/x);
    theta=phi*180/3.141592;
    printf("The polar coordinates will be %0.2f %0.2f",r,theta);
}