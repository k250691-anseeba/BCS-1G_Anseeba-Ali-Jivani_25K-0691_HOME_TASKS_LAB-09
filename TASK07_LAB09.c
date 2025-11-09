#include <stdio.h>

float pricing(){
    int days, i;
    float km, cost = 0;
    float total_km;
    
    printf("Enter rental days:  ");
    scanf("%d", &days);
    printf("Enter kilometers driven in a day: ");
    scanf("%f", &km);
    
    cost = 40*days;
    
    total_km = km*days;
    if(km>100){
    	cost = cost + (total_km - (100*days))*0.25;
    }
    
	if(days>7){
		cost = cost - (cost*0.1);
	}
	
    return cost;
}



int main(){
	float cost;
	
    cost = pricing();
    printf("\nTotal rental cost:  %.2f\n\n", cost);
	
	return 0;
}
