#include <stdio.h>

void temperature();


int main(){
	
	temperature();
	
	return 0;
}


void temperature(){
	float temp;
	
	printf("Enter current temperature in celcius: ");
	scanf("%f", &temp);
	
	if(temp>35){
		printf("CODE 1 - HEAT ALERT");		
	}
	else if(temp<10){
    	printf("CODE 2 - COLD ALERT");
	}
	else if(temp > 15 && temp < 25){
		printf("CODE 3 - COMFORT ZONE");
	}
	else{
		printf("CODE 4 - NORMAL CONDITION");
	}
}
