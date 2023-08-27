#include<stdio.h>

//	float sum(void);    //Function declaration
	
	
	void sum()   //Function definition
	{
		int a,b,sum=0;
		printf("Enter 2 number :\n");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d\n",sum);
	}
    void main() 
	{
		sum(5,4);      // Function calling
	}
// here function is not declared so that's why program gives error 
// when function declared after main method then this is not gives warnings
//when function declared before main method then this is obtain warning but it gives correct output
