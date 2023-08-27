#include<stdio.h>
void main()
{
	int u,x;
	float b;
	printf("Enter unit ");
	scanf("%d",&u);
	if(u<100)
	{
		b=u*0.6;
	}
	else if(u<200)
	{
		x=u-100;
		b=100*0.6+x*0.8;
	}
	else
	{
		x=u-200;
		b=100*0.6+100*0.8+x*1;
	}
	printf("Bill = %0.2f",b);
	
	
}
