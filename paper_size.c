#include <stdio.h>
void main ()
{
    float l=1189,b=841,a1,a2,a3,a4,a5,a6,a7,a8;
    a1=l/2;
    a2=b/2;
    a3=l/4;
    a4=b/4;
    a5=l/8;
    a6=b/8;
    a7=l/16;
    a8=b/16;
    printf(" Original size = %0.2f mm x %0.2f mm \n\n\n",l,b);
    printf("\t\t A1 = %0.2f mm x %0.2f mm \n",a1,b);
    printf("\t\t A2 = %0.2f mm x %0.2f mm \n",a1,a2);
    printf("\t\t A3 = %0.2f mm x %0.2f mm \n",a3,a2);
    printf("\t\t A4 = %0.2f mm x %0.2f mm \n",a3,a4);
    printf("\t\t A5 = %0.2f mm x %0.2f mm \n",a5,a4);
    printf("\t\t A6 = %0.2f mm x %0.2f mm \n",a5,a6);
    printf("\t\t A7 = %0.2f mm x %0.2f mm \n",a7,a6);
    printf("\t\t A8 = %0.2f mm x %0.2f mm \n",a7,a8);
}


