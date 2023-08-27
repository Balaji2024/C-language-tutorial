
	#include<stdio.h>

	//void sum();    //Function declaration
	
	void main() 
	{
		sum();      // Function calling
		printf("Hello\n");
		sum();                      // we can call one function number of times
		sum();
	}
	float sum()   //Function definition
	{
		float a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%f %f",&a,&b);
		sum=a+b;
		printf("sum=%f\n",sum);
	}


/*
function declaration is not necessary but declaration is good
programming sign 
in this program function not declared so,
sum function take default int function but here sum function datatype
is mismatch with int so it gives error 
*/
