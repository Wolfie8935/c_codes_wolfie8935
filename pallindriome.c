//RA2211003011296
#include <stdio.h>

int main () {
    
	int org,rev=0,rem,num;
	printf("Enter any number : ");
	scanf("%d",&org);
	
	num = org;
	
	while (org!=0) {
	    rem = org%10;
        rev = rev*10 + rem;
        org /= 10;
	}
	
	if (num==rev) {
	    printf("%d is a palindrome",num);
	}   
	else {
	    printf("%d is not a palindrome",num);
	}
    
    return 0;
}