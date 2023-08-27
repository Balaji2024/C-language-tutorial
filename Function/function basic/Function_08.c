
	#include<stdio.h>

//	float sum(void);    //Function declaration
	
	void main() 
	{
		char ch;   
		ch=fun();      // Function calling
		printf("ch=%c\n");	
	}
	char fun()   //Function definition
	{
		char c;
		printf("Enter a character :\n");
		scanf("%c",&c);
		return c;
	}


/*
function declaration is not necessary but declaration is good
programming sign 
function is not declared in this program 
char function is mismatch with int so it gives error 
So,function declaration is must important
*/
