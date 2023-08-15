// practice
#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,sp,area;
    printf("The three sides of a triangle are : ");
    scanf("%f %f %f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt((sp)*(sp-a)*(sp-b)*(sp-c));
    printf("The area of the triangle will be : %f",area);
}