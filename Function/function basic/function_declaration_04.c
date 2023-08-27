#include<stdio.h>

	float sum(void);    //Function declaration    there is not parameter pass here
	
	void main() 
	{
		sum(5,4);      // Function calling   in the declaration there is void return type so we can't pass parameter 
	}
	float sum()   //Function definition
	{
		float a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%f %f",&a,&b);
		sum=a+b;
		printf("sum=%f\n",sum);
	}


