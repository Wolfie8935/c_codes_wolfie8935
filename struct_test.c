#include <stdio.h>
#include <string.h>

struct std_details {
    char name[10];
    int age;
    int reg_no;
    char city[10];
}s[5];

int main(){

    // for(int i=0; i<5; i++){
    //     scanf("%s", s[i].name);
    //     scanf("%d %d",&s[i].age , & s[i].reg_no);
    //     scanf("%s", s[i].city);
    // }

    // for(int i=0; i<5; i++){
    //     printf("%s %d %d %s", s[i].name, s[i].age, s[i].reg_no, s[i].city);
    // }
    
    gets(s[1].name);
    printf("%s", s[1].name);



    return 0;
}
