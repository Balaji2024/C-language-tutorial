#include<stdio.h>

	float sum();    //Function declaration  there is not parameter pass here
	
	void main() 
	{
		sum(5,4);      // Function calling    in the declaration there is no return type so we can pass the parameter 
	}                                        // it detect automatially return type is int
	}
	float sum()   //Function definition
	{
		float a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%f %f",&a,&b);
		sum=a+b;
		printf("sum=%f\n",sum);
	}


