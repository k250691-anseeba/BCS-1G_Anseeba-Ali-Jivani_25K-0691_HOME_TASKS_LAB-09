# include <stdio.h>

float billing(float cost, int people);

int main(){
	
	int people;
	float cost, result;
		
	printf("Enter total food cost: ");
	scanf("%f", &cost);
	printf("Enter number of people: ");
	scanf("%d", &people);
	
	result = billing(cost, people);
	printf("The total bill is $%.2f", result);
	
	return 0;
}

    float billing(float cost, int people){
        float bill = cost;
        
        bill = cost + (0.08*cost);            //Tax: 8% on food cost
        
        if(cost > 50){                       //Tip: 15% if food cost > $50, else 10%
        	bill = bill + (cost*0.15);
        } 
        else{
            bill = bill + (cost*0.1);
        }
        
        if (people>6){                  	//Service charge: 5% if group larger than 6 people
        	bill = bill + (cost*0.05);
        }

    return bill;
    }
