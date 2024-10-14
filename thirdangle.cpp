#include<stdio.h>
int main(){
	
	int ta,tb,tc,t = 180;
	
	printf("\nEnter First Angle: ");
	scanf("%d",&ta);
	
	printf("\nEnter Second Angle: ");
	scanf("%d",&tb);
	
	tc=t-ta-tb;
	printf("\nThird Angle is: %d", tc);
		
}