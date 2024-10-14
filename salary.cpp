#include<stdio.h>
int main(){
	float bs=100,hra,da,ta,hrap,dap,tap,gs;
	
	printf("\nBase salary: %f",bs);
	
	hra=hrap/100*bs;
	printf("\n Enter hra Percentage: ");
	scanf("%f",&hrap);
	
	hra=hrap/100*bs;
	printf("\n Enter da Percentage: ");
	scanf("%f",&dap);
	
	hra=hrap/100*bs;
	printf("\n Enter ta Percentage: ");
	scanf("%f",&tap);
	
	gs=+bs+hrap+dap+tap;
	
	printf("\n Gross Salary is: %f",gs);
		
}