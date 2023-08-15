// practice
#include <stdio.h>
void main ()
{
    float marks,percent;
    printf("Enter total marks :");
    scanf("%f",&marks);
    percent=marks/5;
    if(percent>90)
    {
    printf("Congratulations you have been selected for IIT");
    }
    else if(percent>80)
    {
    printf("Congratulations you have been selected for VIT Vellore");
    }
    else if(percent>70)
    {
    printf("Welcome to SRM");
    }
    else if(percent>60)
    {
    printf("Well to Chandigarh University");
    }
    else if(percent>50)
    {
    printf("Take 1 year break so that you can get into SRM");
    }
    else if(percent>40)
    {
    printf("Welcome to BJP");
    }
    else
    {
    printf("Welcome to the world of AIDS");
    }
}