#include<stdio.h>
#include<string.h>

struct admin_det{
    char name[10];
    char city[10];
    int a,b,c;

    struct test{
        char apt[10];
    }obj1;


}p1;

int main()
{
    printf("ENTER NAME: ");
    scanf("%s", p1.name);
    printf("ENTER CITY: ");
    scanf("%s", p1.city);
    printf("ENTER NOS: ");
    scanf("%d %d %d",&p1.a,&p1.b,&p1.c);

    if(p1.a>p1.b && p1.a>p1.c){
        printf("Max no is: %d",p1.a);
    }
    else if(p1.b>p1.a && p1.b>p1.c){
        printf("Max no is: %d",p1.b);
    }
    else{
        printf("Max no is: %d",p1.c);
    }

    scanf("%s", p1.obj1.apt);

return 0;
}