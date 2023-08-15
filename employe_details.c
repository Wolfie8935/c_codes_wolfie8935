#include <stdio.h>
#include <string.h>

struct emp_details{
    char emp_name[10];
    int emp_age;

    struct sub_details{
        char org_name[10];
        int org_year;
    }s1;
}e[3];

int main(){
    printf("RA2211003011296\n");
    for(int i=0; i<3; i++){
        printf("\nName: ");
        scanf("%s", e[i].emp_name);
        printf("Age: ");
        scanf("%d", &e[i].emp_age);
        printf("Org. Name: ");
        scanf("%s", e[i].s1.org_name);
        printf("Year of joining: ");
        scanf("%d", &e[i].s1.org_year);
    }
    printf("\nEmployee Details:");
    for(int i=0; i<3; i++){
        printf("\nName: %s\nAge: %d\nOrganisation name: %s\nYear of joining: %d", e[i].emp_name, e[i].emp_age, e[i].s1.org_name, e[i].s1.org_year);
    }
    
    return 0;
}