
	#include<stdio.h>

    char fun();      //Function declaration
	
	void main() 
	{
		      
		char ch;   
		ch=fun();      // Function calling
		printf("ch=%c\n",ch);	
	}
	char fun()   //Function definition
	{
		
		char c;
		printf("Enter a character :\n");
		scanf("%c",&c);
		return c;    //return 'c';   it always return c variale to fun()
	}


/*
function declaration is not necessary but declaration is good
programming sign 
function is declared in this program 
we can declare function global as well as inside main function
*/
