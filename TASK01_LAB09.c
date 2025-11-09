#include <stdio.h>

#define daily_limit 5000
float transaction(float remaining_limit, float amount);

int main(){
    
    float remaining_limit = daily_limit; 
	float amount;
	
	printf("\nEnter the amount of transaction: $");
	scanf("%f", &amount);

    remaining_limit = transaction(remaining_limit, amount);
    
    if(remaining_limit){
	printf("\nThe remaining amount is $%.2f", remaining_limit);
    }
    
	return 0;
}

float transaction(float remaining_limit, float amount){
	
	if(amount <= remaining_limit){
		remaining_limit -= amount;
		printf("\nApproved!");
		return remaining_limit;
	}
	else{
		printf("\nDeclined!");
		return 0;
	}
}
