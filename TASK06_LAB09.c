# include <stdio.h>


void taxCalculate(float income, float *tax, float *net_income){
    
	if(income <20000){
    	*tax = 0;
	}
    else if(income >= 20001 && income <= 50000){
	    *tax =  (0.1*(income-20000));
    }
    else if (income > 50000){
   	    *tax =  (0.2*(income-50000)) + (0.1*(50000-20000));
	}
	
	//net income = gross income - tax
	*net_income = income - *tax;
}
	
	
int main(){
	
	float income;
	float tax = 0, net_income = 0;
	
	printf("Enter gross income: $ ");
	scanf("%f", &income);
	
	taxCalculate(income, &tax, &net_income);
	printf("\nTax amount: $%.2f", tax);
	printf("\nNet income : $%.2f", net_income);

	return 0;
}
