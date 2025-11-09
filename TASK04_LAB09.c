#include <stdio.h>

float shipping(int amount, float weight){
	float cost = amount;
	
	if(amount > 100){
		printf("\nFree shipping");
	}
	else{
	    if(weight < 2){
	    	cost = cost + 10;
            printf("\nShipping charges: $10");
		}
		else if(weight >= 2 && weight <= 5){
			cost = cost + 15;
            printf("\nShipping charges: $15");
		}
		else if (weight > 5){
			cost = cost + 20;
			printf("\nShipping charges: $20");
		}
	}
	
	return cost;
}


int main(){
	int amount;
	float weight, cost;
	
	printf("Enter total order amount: $");
	scanf("%d", &amount);
	printf("Enter order weight: ");
	scanf("%f", &weight);
	
	cost = shipping(amount, weight);
	printf("\nThe total cost is: %f", cost);
	
	return 0;
}
