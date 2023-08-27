
	#include<stdio.h>

	//void sum();    //Function declaration
	
	void main() 
	{
		sum();      // Function calling
		printf("Hello\n");
		sum();                      // we can call one function number of times
		sum();
	}
	void sum()   //Function definition
	{
		int a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d\n",sum);
	}

/*
function declaration is not necessary but declaration is good
programming sign 
when we dont declare function it not gives any error but it gives warning "conflicting types of 'sum'" and implict declaration 
in this program function not declared so,
sum function take default int function 
*/
