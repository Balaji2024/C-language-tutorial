#include<stdio.h>

	float sum();    //Function declaration
	
	void main() 
	{
		sum();      // Function calling
	}
	float sum(void)   //Function definition
	{
		float a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%f %f",&a,&b);
		sum=a+b;
		printf("sum=%f\n",sum);
	}


