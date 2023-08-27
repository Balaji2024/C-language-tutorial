#include<stdio.h>

	void sum();    //Function declaration
//	void sub();
	
	void main() 
	{
		sum();      // Function calling
		printf("Hello\n");
	
	}
	void sum()   //Function definition
	{
		int a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d\n",sum);
		void sub();      // you can call function in function as well as declare a function,but we can't create function in function,,but in main function we can create function
	    {
	     	printf("Balaji\n");
	    }

	}

	
/*

can't create function in function,but in main function we can create function

#include<stdio.h>

	void sum();    //Function declaration
	void sub();
	
	void main() 
	{
		sum();      // Function calling
		printf("Hello\n");
		sub();
	}
	void sum()   //Function definition
	{
		int a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d\n",sum);
		void sub()
	{
		printf("Balaji\n");
	}
	
	}
	
*/

