//practice
#include <stdio.h>

int areaR (int l, int b);
int areaS (int s);
float areaC (float r);

int main()
{
    int l,b,s;
    float r;
    printf("Enter the sides of a rectangle: ");
    scanf("%d %d",&l,&b);
    printf("Enter the side of a square: ");
    scanf("%d",&s);
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    
    printf("Area of rectangle is : %d\n", areaR(l,b));
    printf("Area of square  is : %d\n", areaS (s));
    printf("Area of circle is : %f\n", areaC(r));
    
    return 0;
}

int areaR (int l, int b){
    return l*b;
}

int areaS (int s){
    return s*s;
}

float areaC (float r){
    return 3.14*r*r;
}