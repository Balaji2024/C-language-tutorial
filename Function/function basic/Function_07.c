
	#include<stdio.h>

	float sum(void);    //Function declaration
	
	void main() 
	{
		sum(5,7);      // Function calling
		printf("Hello\n");	
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
in this program function is declared 
We pass the values it gives error becoz in the declaration
part we pass "void" it is empty.
Suppose you're 100% sure there is no any passing argument then 
better to use in declaration "void".
*/
