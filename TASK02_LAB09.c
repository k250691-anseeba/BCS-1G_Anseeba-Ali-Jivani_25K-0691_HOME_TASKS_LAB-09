#include <stdio.h>

float academicStanding(float mark1, float mark2, float mark3);

int main(){
	
	float mark1, mark2, mark3, avg;
	
	printf("Enter marks for subject 1: (on scale of 0-100)\n");
	scanf("%f", &mark1);
	printf("Enter marks for subject 2: (on scale of 0-100)\n");
	scanf("%f", &mark2);
	printf("Enter marks for subject 3: (on scale of 0-100)\n");
	scanf("%f", &mark3);

    avg = academicStanding(mark1, mark2, mark3);
    printf("The average for entered marks is : %.2f\n\n\n", avg);

	return 0;
}

float academicStanding(float mark1, float mark2, float mark3){
	float sum, average;
	
	sum = mark1+mark2+mark3;
	average = sum/3;
	
	if(mark1>40 && mark2>40 && mark3>40 && average>50){
		printf("\nPASS\n");
	}
	else{
		printf("\nFAIL");
		if(mark1<40){
			printf("\n > You failed subject 1\n");
		}
		if(mark2<40){
			printf("\n > You failed subject 2\n");
		}
		if(mark3<40){
			printf("\n > You failed subject 3\n");
		}
		if(average < 50){
			printf(" > Your average of 3 subjects is below 50\n\n");
		}
	}
	
	return average;
}
