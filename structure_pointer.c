#include <stdio.h>
#include <string.h>

struct details{
    char name[10];
    int age;
}s1, *ptr;

int main (){
    strcpy(s1.name, "Aman");
    s1.age = 3;
    *ptr = s1;
    printf("name: %s",ptr->name);
    printf("age: %d",ptr->age);

    return 0;
}
