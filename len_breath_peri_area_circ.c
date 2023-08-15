
//practice
#include <stdio.h>
int main()
{
    float l,b,r,ar,per,arc,cir;
    printf("The length and breath of the rectangle ");
    scanf(" %f %f",&l,&b);
    printf("The radius of the circle will be ");
    scanf("%f",&r);
    ar= l*b;
    printf("The area of the rectangle will be %f \n",ar);
    per= 2*(l+b);
    printf("The perimeter of the circle will be %f \n",per);
    arc= 3.14*r*r;
    printf("The area of the circle is %0.2f \n",arc);
    cir= 3.14*2*r;
    printf("The circumference of the circle is %0.2f \n",cir);
    return 0;
}
    