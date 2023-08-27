#include<stdio.h>
void main()
{
	int a=20;   
	if(a>10);          // ; --create empty block after if statement  
	                   // if not immidiate to the else and it gives error
	{
		printf("A");
    	printf("B");
	}
	else
	{
		printf("C");
		printf("D");
		
	}
   
	 
}
