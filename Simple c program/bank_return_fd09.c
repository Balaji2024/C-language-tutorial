#include<stdio.h>
void main()
{
	int p,d;
	float r,ret;
	printf("Enter principal amount ");
	scanf("%d",&p);
	printf("Enter interest rate ");
	scanf("%f",&r);
	printf("Enter duration ");
	scanf("%d",&d);
	ret=p+(p*r*d/100);
	printf("Return amount = %0.2f",ret);
	
	
}
