	#include<stdio.h>

 	void sum();    //Function declaration
	
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
So,in this program declare function becoz main function
is before sum function 

*/

