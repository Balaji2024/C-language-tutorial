#include<stdio.h>


	
	void main() 
	{
		sum();      // Function calling
	}
	void sum()   //Function definition
	{
		float a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d\n",sum);
	}

// here function is not declared so that's why program gives error 
/
