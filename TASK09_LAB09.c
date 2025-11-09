#include <stdio.h>

int main(){
	
	int a = 100, b = 200, c = 300;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;
	
	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	ptr3 = temp;
	
	*ptr1 += 70;      
    *ptr2 -= 10;    
    *ptr3 *= 5; 
	
	ptr1 = &c;
	ptr2 = &a;	
	ptr3 = &b;
	
	*ptr1 += *ptr3;      
    *ptr2 -= 60;    
    *ptr3 *= 10; 
	
	
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    
	return 0; 
}
