#include<stdio.h>

	char fun();  // we can define function inside main function as well as outside of main function
	            // but for better to use we define function outside the main function 
	
	void main()
	{
	
		char ch;
		ch=fun();
		printf("ch=%c",ch);
	}
	char fun()
	{
		char ch;
		printf("Enter a character ");
		scanf("%c",&ch);
		return ch;
	}


