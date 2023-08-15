//RA2211003011296
#include <stdio.h>
int main () {
    float a,b;
    int op;
    printf("\t\t\tEnter any two numbers : ");
    scanf("%f %f",&a,&b);
    
    for(op=1 ; op<7 ; op++) {
        
        printf("\n\n1. Read the numbers \n2. Addition \n3. Subtraction \n4. Multiplication \n5. Division \n6. Exit\n\n");
    printf( "\t\t\tEnter your Choice : " );
    scanf("%d",&op);
    
        switch(op) {
            case 1: printf("\nThe Two numbers are %0.1f %0.1f",a,b);
            break;
            case 2: printf("\nAddition = %0.1f", a+b);
            break;
            case 3: printf("\nSubstraction = %0.1f",a-b);
            break;
            case 4: printf("\nMultiplication = %0.1f",a*b);
            break;
            case 5: printf("\nDivision = %0.3f",a/b);
            break;
            case 6: continue;
            default: printf("\nKindly enter a correct option \n");
            break;
        }
    }  
    printf("Thank you for using my program, hope you had a wonderful time\n \t\t\tSEE YOU SOON");
    
    return 0;
}